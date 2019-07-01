# -----------------------------------------------------------------------------
# new version by CD
import os
import time
import sys
import re

from multiprocessing import Pool


# -----------------------------------------------------------------------------
def scan_files(directory, prefix=None, postfix=None):
    files_list = []

    for root, sub_dirs, files in os.walk(directory):
        for special_file in files:
            if postfix:
                if special_file.endswith(postfix):
                    files_list.append(os.path.join(root, special_file))
            elif prefix:
                if special_file.startswith(prefix):
                    files_list.append(os.path.join(root, special_file))
            else:
                files_list.append(os.path.join(root, special_file))

    return files_list


# -----------------------------------------------------------------------------
def execFormat(file_name):
    os.system(os.path.expanduser('~')
              + ''.join('\\.vscode\\extensions\\ms-vscode.cpptools-0.19.0\\LLVM\\bin\\clang-format.exe -style="file" -verbose -fallback-style="LLVM" -i ')
              + ''.join(file_name))


# -----------------------------------------------------------------------------
def creatFormatProcessFormPool(process_pool, task, list):
    for i in range(len(list)):
        process_pool.apply_async(task, args=(list[i],))

    # Waiting for all processes to end
    process_pool.close()
    process_pool.join()


# # -----------------------------------------------------------------------------
# if __name__ == '__main__':

#     start = time.time()

#     # Scan files: .c/.h
#     file_lists = []
#     file_lists.append(scan_files('.', postfix='.c'))
#     file_lists.append(scan_files('.', postfix='.h'))

#     # Creat process pool
#     for file_list in file_lists:
#         file_list_pool = Pool(len(file_lists))
#         creatFormatProcessFormPool(file_list_pool, execFormat, file_list)

#     # End
#     end = time.time()
#     print('Format runs OK, total: %.2f sec.' % (end - start))


# -----------------------------------------------------------------------------
def readIgnoreFile():
    ignore_list = []

    with open('.formatignore') as f:
        ignore_lines = f.readlines()

        # print(ignore_list)
        for ignore_line in ignore_lines:
            # line is Null
            if(ignore_line.rstrip() == ''):
                pass
            # line is begin with "#" comments
            elif(re.match(r'^#', ignore_line.rstrip())):
                pass
            else:
                ignore_list.append(ignore_line.rstrip())

        return ignore_list


# -----------------------------------------------------------------------------
if __name__ == '__main__':
    start = time.time()

    # read ignore list
    ignore_files = readIgnoreFile()
    print("-------------- Read '.formatignore' file ----------")
    print("read list: \n"+str(ignore_files))
    
    # scan files
    file_lists = []
    file_lists.append(scan_files('..', postfix='.c'))
    file_lists.append(scan_files('..', postfix='.h'))

    # delete ignore filePath
    format_file = []
    format_file_list = []
    print("----------------- Ignore File List ----------------")
    for file1_list in file_lists:
        for i in range(len(file1_list)):
            flag_compare = 0
            for j in range(len(ignore_files)):
                if re.findall(ignore_files[j], file1_list[i]):
                    flag_compare += 1
                    print(' - '+file1_list[i])
                    break
                else:
                    flag_compare += 0
                    continue
            if(flag_compare == 0):
                format_file_list.append(file1_list[i])
    format_file.append(format_file_list)
    file_num = len(format_file_list)

    # Creat process pool
    print('------------------ Format Begin -------------------')
    for file_list in format_file:  #file_lists
        file_list_pool = Pool(4)
        creatFormatProcessFormPool(file_list_pool, execFormat, file_list)

    # End
    end = time.time()
    print("------------------- Format End  -------------------")
    print('Total %d files, spends %.2f sec.' % (file_num, end - start))
    input("Press any key to quit...")
# 讀取學號檔案
with open("2b_user_list.txt", 'r') as user_file:
    user_lines = user_file.read().splitlines()

# 讀取 last 指令轉出的檔案, 以 last -w > cad2023_2b_w8.txt 建立檔案
with open("cad2023_2b_w8.txt", 'r') as cad_file:
    # 以下是利用跳行符號, 將每一行區隔成數列
    cad_lines = cad_file.read().splitlines()
#print(cad_lines)

# 從 cad_lines 建立所有登入使用者數列
login_users = []
for i in cad_lines:
    line_list = i.split(" ")
    login_users.append(line_list[0])
#print(login_users)

# 根據 https://stackoverflow.com/questions/480214/how-do-i-remove-duplicates-from-a-list-while-preserving-order
# 數列去除重複元素但仍保持原始次序
login_users = list(dict.fromkeys(login_users))
#print(login_users)

# 建立數列存放符合條件的使用者
valid_users = []

# 取出符合條件的使用者
for line in login_users:
    if "cad" in line:
        # 將 cad 字串去除
        user_number = line.replace("cad", "")
        if user_number in user_lines:
            valid_users.append(user_number)

# 利用 reverse() 將 valid_users 反向排序
valid_users.reverse()

# , 最早登入者列在最前面
for user in valid_users:
    print(user)

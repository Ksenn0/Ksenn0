import os

usr = "KS"

while True:
    cmd = input(f"$\033[32m{usr}\033[0m> ")
    os.system(cmd)
    
    if cmd == "":
        ncmd = input(f"$\033[31m{usr}\033[0m> ")
        #ESP cmd
        if ncmd == "$exit":
            break
    elif cmd == " ":
        os.chdir(input("cd: "))

n = int(input())
i = 0
while 1:
    if i == n:
        break
    s = input().split()
    if s[0] == "Thor":
        print("Y")
    else:
        print("N")
    i += 1

t = int(input())
i = 0
flag = 0
while 1:
    for j in range(t):
        if i == 1000:
            flag = 1
            break
        print("N[%d] = %d" % (i, j))
        i += 1
    if flag == 1:
        break

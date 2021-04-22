while 1:
    x = int(input())
    if x == 0:
        break
    s = ""
    for i in range(1, x + 1):
        if i == x:
            s += str(i)
        else:
            s += str(i) + " "
    print(s)

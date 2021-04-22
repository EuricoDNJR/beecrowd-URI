
while 1:
    try:
        n = int(input())
        i = 1
        cont = 0
        while 1:
            if i == n:
                break
            else:
                i = i * 2
                cont += 1
        print(cont)
    except EOFError:
        break

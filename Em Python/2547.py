while 1:
    try:
        cont = 0
        n, amin, amax = map(int,input().split())
        for i in range(0,n):
            a = int(input())
            if (a >= amin) and (a <= amax):
                cont += 1
        print(cont)
    except EOFError:
        break

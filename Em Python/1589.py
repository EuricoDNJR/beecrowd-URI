n = int(input())
cont = 0
while 1:
    if cont == n:
        break
    r1, r2 = map(int, input().split())
    print("%d" % (r1 + r2))
    cont += 1

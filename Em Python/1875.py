i = 0
g = 0
r = 0
b = 0
testes = int(input())

while i < testes:
    gols = int(input())
    j = 0
    while j < gols:
        t1, t2 = map(str, input().split())
        if t1 == 'G':
            if t2 == 'R':
                g += 1
            else:
                g += 2
        if t1 == 'B':
            if t2 == 'G':
                b += 1
            else:
                b += 2
        if t1 == 'R':
            if t2 == 'B':
                r += 1
            else:
                r += 2
        j += 1
    if g == r and r == b:
        print("trempate")
    elif g == b and b > r:
        print("empate")
    elif g == r and r > b:
        print("empate")
    elif b == r and r > g:
        print("empate")
    elif g > b and g > r:
        print("green")
    elif b > g and b > r:
        print("blue")
    elif r > g and r > b:
        print("red")
    g = 0
    b = 0
    r = 0
    i += 1
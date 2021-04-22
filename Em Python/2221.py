def valorgolpe (a, d, l, b):
    calc = 0
    calc = (a + d) / 2
    if l % 2 == 0:
        return calc + b
    return calc
i = 0
t = int(input())
while i < t:
    b = int(input())
    a, d, l = map(int, input().split())
    dabriel = valorgolpe(a, d, l, b)
    a, d, l = map(int, input().split())
    guarte = valorgolpe(a, d, l, b)
    if dabriel > guarte:
        print("Dabriel")
    elif guarte > dabriel:
        print("Guarte")
    else:
        print("Empate")
    i += 1

import math
distancia = 0.0
while 1:
    try:
        R1, X1, Y1, R2, X2, Y2 = map(int, input().split())

        distancia = math.sqrt(math.pow((X2 - X1), 2) + math.pow((Y2 - Y1), 2))

        if R1 < distancia + R2:
            print("MORTO")
        else:
            print("RICO")
    except EOFError:
        break
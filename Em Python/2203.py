import math

def dist(xf, yf, xi, yi):
    return math.sqrt(math.pow((xi - xf), 2) + math.pow((yi - yf), 2))



while True:
    try:
        xf, yf, xi, yi, vi, r1, r2 = map(float, input().split())
        if dist(xf, yf, xi, yi) + vi * 1.5 > r1 + r2:
            print("N")
        else:
            print("Y")
    except EOFError:
        break

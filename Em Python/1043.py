a, b, c = map(float, input().split())

if b - c < a and a < b + c and a - c < b and b < a + c and a - b < c and c < a + b :
    print("Perimetro = %0.1f" % (a+b+c))
else:
    print("Area = %0.1f" % (((a+b)*c)/2))
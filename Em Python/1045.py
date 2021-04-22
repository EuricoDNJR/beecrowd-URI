a, b, c = map(float, input().split())
if b > a and b > c:
     a = a + b
     b = a - b
     a = a - b
if c > a and c > b:
    a = a + c
    c = a - c
    a = a - c
if a >= b + c:
    print("NAO FORMA TRIANGULO")
else:
    if a * a == b * b + c * c:
        print("TRIANGULO RETANGULO")
    if a * a > b * b + c * c:
        print("TRIANGULO OBTUSANGULO")
    if a * a < b * b + c * c:
        print("TRIANGULO ACUTANGULO")
    if a == b == c:
        print("TRIANGULO EQUILATERO")
    if a == b and c != a:
        print("TRIANGULO ISOSCELES")
    if a == c and b != a:
        print("TRIANGULO ISOSCELES")
    if c == b and a != b:
        print("TRIANGULO ISOSCELES")
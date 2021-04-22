a, b = map(int, input().split())
neg = 0
if b < 0:
    neg = 1
b = abs(b)
q = a // b
r = a % b
a = b * q + r

r = a % b
q = a // b

if neg == 1:
    q = q * (-1)
print("%d %d" % (q, r))

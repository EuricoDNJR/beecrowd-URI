op = input()
matrix = []

for i in range(0,12):
    line = []
    for j in range(0,12):
        line.append(float(input()))
    matrix.append(line)

lmt = 0
soma = 0.0
count = 0.0
for i in range(1, 12):
    lmt += 1
    for j in range(0, lmt):
        soma += matrix[i][j]
        count += 1

if op == "S":
    print("%.1f" % soma)
else:
    print("%.1f" % (soma/count))

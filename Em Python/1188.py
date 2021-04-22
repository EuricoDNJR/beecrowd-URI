op = input()
matrix = []

for i in range(0, 12):
    line = []
    for j in range(0, 12):
        line.append(float(input()))
    matrix.append(line)

stt = 6
stp = 6
count = 0.0
soma = 0.0

for i in range(7, 12):
    stt -= 1
    stp += 1
    for j in range(stt, stp):
        soma += matrix[i][j]
        count += 1

if op == "S":
    print("%.1f" % soma)
else:
    print("%.1f" % (soma / count))

op = input()
matrix = []

for i in range(0, 12):
    line = []
    for j in range(0, 12):
        line.append(float(input()))
    matrix.append(line)

stt = 0
stp = 12
soma = 0.0
count = 0.0

for j in range(0, 5):
    stt += 1
    stp -= 1
    for i in range(stt, stp):
        soma += matrix[i][j]
        count += 1

if op == "S":
    print("%.1f" % soma)
else:
    print("%.1f" % (soma / count))

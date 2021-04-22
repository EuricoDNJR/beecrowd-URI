op = input()
matrix = []
for i in range(0, 12):
    linha = []
    for j in range(0, 12):
        linha.append(float(input()))
    matrix.append(linha)
acres = 0
soma = 0.0
count = 0.0
for i in range(0, 11):
    acres += 1
    for j in range(acres, 12):
        soma += matrix[i][j]
        count += 1.0

if op == "S":
    print("%.1f" % soma)
else:
    print("%.1f" % (soma/count))

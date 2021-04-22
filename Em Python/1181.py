lineselect = float(input())
op = input()
lista = []
sum = 0.0
for i in range(12):
    linha = []
    for j in range(12):
        n = float(input())
        if i == lineselect:
            sum += n
        linha.append(n)
    lista.append(linha)


if op == "S":
    print("%.1f" % sum)
else:
    print("%.1f" % (sum/12))


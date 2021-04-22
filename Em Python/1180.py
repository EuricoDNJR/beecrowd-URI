i = 0
n = int(input())
x = list(map(int, input().split()))
menor = x[0]
indice = 0
for i in range(1, n):
    if x[i] < menor:
        menor = x[i]
        indice = i
print("Menor valor: %d" % menor)
print("Posicao: %d" % indice)

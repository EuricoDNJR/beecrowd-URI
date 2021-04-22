i = 0
par = []
impar = []
while i < 15:
    n = int(input())
    if n % 2 == 0:
        par.append(n)
    else:
        impar.append(n)
    if len(par) == 5:
        for j in range(5):
            print("par[%d] = %d" % (j, par[j]))
        par = []
    elif len(impar) == 5:
        for j in range(5):
            print("impar[%d] = %d" % (j, impar[j]))
        impar = []
    i += 1
if len(impar) > 0:
    for i in range(len(impar)):
        print("impar[%d] = %d" % (i, impar[i]))
if len(par) > 0:
    for i in range(len(par)):
        print("par[%d] = %d" % (i, par[i]))
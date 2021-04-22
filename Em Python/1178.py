n = [float(input())]
[n.append(n[i - 1] / 2) for i in range(1, 100)]
for i in range(100):
    print("N[%d] = %.4f" % (i, n[i]))

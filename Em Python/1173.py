first = int(input())
n = [first]
for i in range(0, 9):
    n.append(n[i] * 2)
for i in range(10):
    print("N[%d] = %d" % (i, n[i]))
a = []
for i in range(100):
    a.append(float(input()))
for i in range(100):
    if a[i] <= 10:
        print("A[%d] = %.1f" % (i, a[i]))

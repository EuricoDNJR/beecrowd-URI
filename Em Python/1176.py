t = int(input())
f = [0, 1]
for i in range(61):
    f.append(f[i] + f[i + 1])
for t in range(t):
    n = int(input())
    print("Fib(%d) = %d" % (n, f[n]))

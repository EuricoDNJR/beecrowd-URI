column_selected = int(input())
operation = input()
matrix = []
sum_ = 0.0

for i in range(12):
    line = []
    for j in range(12):
        n = float(input())
        if j == column_selected:
            sum_ += n
        line.append(n)
    matrix.append(line)


if operation == "S":
    print("%.1f" % sum_)
else:
    print("%.1f" % (sum_/12))

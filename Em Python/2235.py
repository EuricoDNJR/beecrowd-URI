A, B, C = map(int, input().split())

if A == B or B == C or A == C or A + B == C or A + C == B or B + C == A:
    print("S")
else:
    print("N")

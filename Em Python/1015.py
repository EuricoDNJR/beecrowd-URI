import math
x1,y1 = map(float,input().split())
x2,y2 = map(float,input().split())

print("%.4f"%(math.pow((math.pow((x2 - x1), 2) + math.pow((y2 - y1), 2)),1/2)))
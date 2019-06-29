import math
m=int(input())
l=list(map(int,input().split()))
s=0
for i in range(m):
    s=s+l[i]
s=s/m
print(math.floor(s))

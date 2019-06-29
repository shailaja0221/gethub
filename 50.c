a=0
n=int(input())
if(n==1):
    a=1
a=n//2
for i in range(a):
    if(n==2**i):
        a+=1
        break
if(a==1):
    print("yes")
else:
    print("no")

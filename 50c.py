    
a=0
n=int(input())
if(n==1):
    a=1
b=n//2
for i in range(b):
    if(n==2**i):
        a+=1
        break
if(b==1):
    print("yes")
else:
    print("no")

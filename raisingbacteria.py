n=int(input())
x=0
while(n/2!=0):
    if n%2==1:
        x+=1
    n=n//2
print(x)

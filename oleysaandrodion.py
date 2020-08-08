n,t=map(int,input().split())
m=0
for i in range(10**(n-1),10**n):
    if i%t==0:
        print(i)
        m=1
        break
        
if m==0:
    print(-1)

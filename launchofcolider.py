n=int(input())
d=input()
l=list(map(int,input().split()))
m=0
r=10**9
for i in range(n-1):
    if d[i]=='R' and d[i+1]=='L':
        m=(l[i+1]-l[i])/2
        if m<r:
            r=m
if r==10**9:
    print(-1)
else:
    print(int(r))
        
        

n,k=map(int,input().split())
l=[0]
l.extend(list(map(int,input().split())))
for i in range(1,n+1):
    l[i]=l[i]+l[i-1]
a=999999999
answer=0
for i in range(1,n-k+2):
    q=l[i+k-1]-l[i-1]
    if a>q:
        a=q
        answer=i
print(answer)
    
    

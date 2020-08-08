n=int(input())
q=[0]
q.extend(list(map(int,input().split())))
a=sorted(q)
for i in range(1,n+1):
    a[i]+=a[i-1]
    q[i]+=q[i-1]
for i in range(int(input())):
    o,l,r=map(int,input().split())
    if o==1:
        print(q[r]-q[l-1])
    else:
        print(a[r]-a[l-1])

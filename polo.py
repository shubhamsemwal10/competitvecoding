n,k=map(int,input().split())
p=0
for i in range(n):
    l,r=map(int,input().split())
    p+=r-l+1
if p%k==0:
    print(0)
else:
    print(k-p%k)

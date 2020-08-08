l,r=map(int,input().split())
c=-1
if l==r or r-l==1:
    print(-1)
    c=1
if l%2==0 and c!=1:
    print(l,l+1,l+2)
    c=1
if l%2!=0 and c!=1 and l-r>2:
    print(l+1,l+2,l+3)
    c=1
if c!=1:
    print(c)

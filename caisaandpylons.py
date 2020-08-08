n=int(input())
d=0
x=0
a=0
l=list(map(int,input().split()))
for i in l:
    d+=x-i
    x=i
    if d<0:
        a+=abs(d)
        d=0
print(a)    

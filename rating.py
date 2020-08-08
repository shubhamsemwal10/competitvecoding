n=int(input())
a=[]
b=[]
m=0
for i in  range(0,n):
    g,h=map(int,input().split())
    a.append(g)
    b.append(h)
for i in range(0,n):
    if a[i]!=b[i]:
        m=1
    else:
        pass
if(sorted(a,reverse=True)!=a)and m==0 :
    m=2
if (sorted(a,reverse=True)==a) and m==0:
    m=3
if m==1:
    print("rated")
if m==2:
    print("unrated")
if m==3:
    print("maybe")

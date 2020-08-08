n,m=map(int,input().split())
a=[]
b=[]
count=0
s=0
y=False
answer=0
for i in range(m):
    x,y=map(int,input().split())
    a.append(x)
    b.append(y)
if len(set(b))!=len(a):
    y=True
for i in sorted(set(b),reverse=True):
    q=b.index(i)
    j=a[q]
    if y:
        a.remove(j)
    else:
        continue
  #  print("intitial value j",j)
    for t in range(j):
        while j!=0 :
 #           print("j in while",j)
            count+=1
            j-=1
            s+=i
#            print(count,"count","Sum",s)
            if count==n:
                print(s)
         

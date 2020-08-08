n,m,k,t=map(int,input().split())
l=[]
for i in range(k):
    a,b=map(int,input().split())
    pos=(b-1)+m*(a-1)
    l.append(pos)
for i in range(t):
    a,b=map(int,input().split())
    pos=(b-1)+m*(a-1)
    j=0
    k=0
    for i in sorted(l):
        if i<pos:
            k+=1
        elif pos==i:
            j=1
        else:
            break
    pos-=k
    if j==1:
        print("Waste")
    elif pos%3==1 and j==0:
        print("Kiwis")
    elif pos%3==2 and j==0:
        print("Grapes")
    else:
        print("Carrots")

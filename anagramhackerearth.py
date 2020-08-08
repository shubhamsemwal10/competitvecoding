t=int(input())
while(t>0):
    a=input()
    b=input()
    A=[]
    B=[]
    count=0
    for i in a:
        A.append(i)
    for i in b:
        B.append(i)
    A.sort()
    B.sort()
    q=len(A)+len(B)
    z =(set(A)).intersection(set(B))
    i=list(z)
    r=q-2*len(i)
    print(r)
    t-=1

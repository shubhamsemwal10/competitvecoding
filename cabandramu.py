for o in range(int(input())):
    c1,c2,c3,c4=map(int,input().split())
    n,m=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    s=0
    tr=0
    tc=0
    tt=0
    for i in a:
        s+=min((c1*i),c2)
        print(tr,'Tr')
    tr=min(c3,s)
    s=0
    for i in b:
        s+=min((i*c1),c2)
    tc=min(c3,s)
    tt=min((tr+tc),c4)
    print(tt)

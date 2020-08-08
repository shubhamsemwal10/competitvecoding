ans=0
for i in range(5):
    x=list(map(int,input().split()))
    if 1 in x:
        c=x.index(1)
        if i==0:
            if c==0:
                ans=4
            elif c==1:
                ans=3
            elif c==2:
                ans=2
            elif c==3:
                ans=3
            elif c==4:
                ans=4
        elif i==1:
            if c==0:
                ans=3
            elif c==1:
                ans=2
            elif c==2:
                ans=1
            elif c==3:
                ans=2
            elif c==4:
                ans=3
        elif i==2:
            if c==0:
                ans=2
            elif c==1:
                ans=1
            elif c==2:
                ans=0
            elif c==3:
                ans=1
            elif c==4:
                ans=2
        elif i==3:
            if c==0:
                ans=3
            elif c==1:
                ans=2
            elif c==2:
                ans=1
            elif c==3:
                ans=2
            elif c==4:
                ans=3
        elif i==4:
            if c==0:
                ans=4
            elif c==1:
                ans=3
            elif c==2:
                ans=2
            elif c==3:
                ans=3
            elif c==4:
                ans=4

print(ans)


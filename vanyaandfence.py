n,h=map(int,input().split())
w=0
x=list(map(int,input().split()))
for i in x:
    if i>h:
        w+=2
    else:
        w+=1
print(w)

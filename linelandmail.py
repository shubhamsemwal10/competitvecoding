n=int(input())
l=list(map(int,input().split()))
for i in l:
    a=[]
    for j in l:
        if i!=j:
            a.append(abs(j-i))
    print(min(a)," ",max(a))
    

n=int(input())
l=list(map(int,input().split()))
b=True
if n==2:
    if l[0]==l[1]:
        b=False
if n>2:
    for i in range(n):
        count=0
        for j in range(n):
            if l[i]==l[j]:
                count+=1
        if n<(2*count-1):
            b=False
if b:
    print("YES")
else:
    print("NO")

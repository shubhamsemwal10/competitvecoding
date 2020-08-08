n,k=map(int,input().split())
l=[]
count=0
for i in range(0,k+1):
    l.append(str(i))
for i in range(n):
    a=input()
    b=sorted(list(set(a)))
    if b==l:
        count+=1
print(count)

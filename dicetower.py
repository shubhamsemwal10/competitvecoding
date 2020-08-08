n=int(input())
x=int(input())
c=0
for i in range(n):
    a,b=map(int,input().split())
    if a==x or a==7-x or b==x or b==7-x:
        print("NO")
        c=1
        break
if c==0:
    print("YES")

x,y=map(int,input().split())
m=x+y-(x+y)%5
l=[]
c=0
for i in range(1,x):
    if i%5==1:
        a=4
    if i%5==2:
        a=3
    if a%5==3:
        a=2
    if a%5==4:
        a=1
    if a%5==0:
        a=0
    while(a<y):
        a+=5
        print(a,i)
        c+=1
print(c)

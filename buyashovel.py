k,r=map(int,input().split())
for i in range(1,10):
    j=k
    j=j*i
    o=j-r
    if o%10==0:
        print(i)
        break
    if j%10==0:
        print(i)
        break
    

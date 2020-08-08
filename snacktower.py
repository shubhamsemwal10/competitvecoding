n=int(input())
l=list(map(int,input().split()))
s=[]
for i in l:
    s.insert(i,True)
    while(s[n]==True and n>0):
        print(n,end=" ")
        n-=1
    print("\n")

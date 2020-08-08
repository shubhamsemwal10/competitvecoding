n=input()
l=list(map(int,input().split()))
count=0
s=0
for i in sorted(l,reverse=True):
    if(s<=sum(l)-s):
        s+=i
        count+=1
print(count)

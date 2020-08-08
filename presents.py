n=int(input())
l=list(map(int,input().split()))
for i in sorted(l):
    print(l.index(i)+1,end=' ')

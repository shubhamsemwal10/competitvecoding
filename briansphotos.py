n,m=map(int,input().split())
l=[]
for i in range(n):
        l.append(input().split())
su=0
for i in l:
    su+=i.count('W')+i.count('B')+i.count('G')
if su==n*m:
    print("#Black&White")
else:
    print("#Color")

n=int(input())
l=[]
for i in range(n):
    l.append(input())
s=l[0][0]
m=0
for i in range(n):
    if l[i][i]!=s:
        m=1
j=n-1
for i in range(n):
    if l[i][j]!=s:
        m=1
    j-=1
for i in l:
    if len(set(i))==3 or len(set(i))==1 or (i[0]=='o'and i[1]=='x'):
        m=1
if m==1:
    print('NO')
if m==0:
    print('YES')
        

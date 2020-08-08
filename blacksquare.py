x=list(map(int,input().split()))
s=input()
e=0
for i in s:
    if i=='1':
        e=e+x[0]
        print(e)
    elif i=='2':
        e+=x[1]
    elif i=='3':
        e+=x[2]
    elif i=='4':
        e+=x[3]
print(e)

n,k=map(int,input().split())
l=[]
z=''
if n==k:
    for i in range(n):
         l.append(chr(97+i))
else:
    while n-len(l)>k:
        for i in range(k):
            l.append(chr(97+i))
    for i in range(0,n-len(l)):
        l.append(chr(97+i))
z=''.join(map(str,l))
print(z)

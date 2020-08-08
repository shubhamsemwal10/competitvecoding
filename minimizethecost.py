
N,K=map(int,input().split())
A=list(map(int,input().split()))
c=max(A)
k=A.index(c)
B=list()
for i in range(0,N):
    B.append(0)
B[k]=c*-1
for i in range(0,N):
    if i!=k and c>0:
        B[i]=(A[i])*-1
        c-=abs(A[i])
        
        
s=0
for i in range(N):
    s+=abs(A[i]+B[i])
print(s)


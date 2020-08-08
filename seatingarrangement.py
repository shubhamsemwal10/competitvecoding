WS=[]
MS=[]
AS=[]
for i in range(1,109):
    if i%6==1 or i%6==0:
        WS.append(i)
for i in range(2,109,3):
    MS.append(i)
for i in range(3,109,6):
    AS.append(i)
    AS.append(i+1)
T=int(input())
while(T>0):
    N=int(input())
    if N in WS:
        k=WS.index(N)
        if k%2==1:
            print(WS[k+1],"WS")
        else:
            print(WS[k+3],"WS")
    if N in MS:
        k=MS.index(N)
        if k%2==1:
            print(MS[k+1],"MS")
        else:
            print(MS[k+3],"MS")
    if N in AS:
        k=AS.index(N)
        if k%2==1:
            print(AS[k+1],"AS")
        else:
            print(AS[k+3],"AS")
    
    T-=1

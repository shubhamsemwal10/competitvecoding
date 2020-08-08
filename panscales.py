a,b=input().split('|')
u=input()
x=len(u)
A=len(a)
B=len(b)
t=A+B+x
if abs(B-A)<=x and t%2==0:
    if t%2==0:
        t=t/2
        A=int(abs(t-A))
        a+=u[0:A]
        b+=u[A:]
    else:
        t=t//2
        A=int(abs(t-A))
        a+=u[0:A]
        b+=u[A:x-1]
    print(a,end='')
    print("|",end='')
    print(b)
else:
    print("Impossible")

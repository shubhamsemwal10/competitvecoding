def printar(a):
    for i in a:
        print(i)
def bin(A,n):
    if(n<1):
        printar(A)
    
    else:
        A[n]=0
        A[n-1]=0
        bin(A,n-1)
        A[n-1]=1
        bin(A,n-1
            
bin(s,10)

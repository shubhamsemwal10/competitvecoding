n,k=map(int,input().split())
if k>round(n/2):
    print((k-round(n/2))*2)
else:
    print((k)*2-1)
        

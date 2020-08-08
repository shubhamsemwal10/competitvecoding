while True:
    n=int(input())
    if n==0:
        break
    else:
        s='yes'
        c=0
        for i in range(1,n):
            if n%i==0:
                c=c+1
            else:
                pass
        if c%2==0:
            print('yes')
        else:
            print('no')
        

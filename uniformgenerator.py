def gcd(a,b):
    if(a%b==0):
        return b
    else:
        return gcd(b,a%b)
i=True
m=10*" "
n=5*" "
try:
    while i:
        step,mod=map(int,input().split())
        if step==0:
            break
        else:
            h=gcd(step,mod)
            if h==1:
                print(m,step,m,mod,n,"Good Choice \n")    
            else:
                print(m,step,m,mod,n,"Bad Choice \n")
except :
    exit()

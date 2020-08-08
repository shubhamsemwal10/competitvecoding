def tostring(a):
    m=' '    
    m=m.join(a)
    return m
def permutation(s,i,n):
    if i==n:
        m=" "
        print(tostring(s))
    else:
        for j in range(i,n+1):
            s[i],s[j]=s[j],s[i]  
            permutation(s,i+1,n)
            s[i],s[j]=s[j],s[i]

s="ABC"
n=len(s)
l=list(s)
permutation(l,0,n-1)

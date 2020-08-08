def lcm(a,b):
    if a>b:
        g=a
    else:
        g=b
    while(True):
        if g%a==0 and g%b==0:
            l=g
            break
        else:
            g+=1
    return l
try:
      t=int(input())
      for i in range(t):
            l=[]
            n,m=map(int,input().split())
            l=list(map(int,input().split()))
            x=lcm(l[0],l[1])
            for i in l:
                y=lcm(x,i)
            b=1
            while(b!=m):
                if <lcm(b,y):
                    b=i
                b=b+1
            print(v)
except EOFError:
      pass

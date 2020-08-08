try:
    t=int(input())
    for i in range(t):
        a,b=map(int,input().split())
        l=[]
        if a<10 and b<10:
            print(a+b)
        if a>10 and b>10:
            l.append(a+b)
            a1=a//10 #4
            a2=a%10  #5
            b1=b//10 #5
            b2=b%10  #6
            l.append(((b1*10)+a2)+((a1*10)+b2))#swappin a1 b1
            l.append(((b2*10)+a1)+((b1*10)+a1)) #swappin a1 b2
            l.append(((a1*10)+b1)+((a2*10)+b2))#swappin a2 b1
            l.append(((a1*10)++b2)+((b1*10)+a2))
            print(max(l))
        if a>10 and b<10:
            a1=a//10
            a2=a%10
            l.append(a1+(b*10+a2))
            l.append(a2+(a1*10+b))
            print(max(l))
        if a<10 and b>10:
            b1=b//10
            b2=b%10
            l.append(b1+(a*10+b2))
            l.append(b2+(b1*10+a))
            print(max(l))
except:
    pass
        

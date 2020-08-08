l=[2,3,5,7,11,13,17,19,23,29,31,37,41,43,47]
n,m=map(int,input().split())
a=l.index(n)
if n!=47:
    if m==l[a+1] :
        print("YES")
    else:
        print("NO")
else:
    print("NO")

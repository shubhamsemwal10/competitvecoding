n=int(input())
b=[]
l=list(map(int,input().split()))
if n>2:
    for i in range(n):
        count=0
        ref=l[i]
        for j in range(i-1,-1,-1):
            if ref>=l[j] and i!=0 :
                count+=1
                ref=l[j]
          #      print(ref,j,l[i],i,"loop1")
            else:
                break
        ref=l[i]        
        for j in range(i+1,n):
            if ref>=l[j] and i!=n-1:
                 count+=1
                 ref=l[j]
         #        print(ref,j,l[i],"loop2")   
            else:
                 break
       #print("new")         
        #print(count)
        b.append(count)
    print(max(b)+1)
else:
    print(n)
'''
8
1 2 1 1 1 3 3 4'''

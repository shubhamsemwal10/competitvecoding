def dis(a,b,c,d):
    d=(a-c)*(a-c)+(b-d)*(b-d)
    return d

        
    
n,m,x=map(int,input().split())
l=[]
shift=[]
pos=[]
for i in range(n):
    a=input()
    l.append(a)
for i in range(n):
    for j in range(m):
        if l[i][j]=='S':
            shift.append((i,j))
        else:
           pos.append((l[i][j],i,j))
q=int(input())
s=input()
ans=0
e=0
p=[]

for k in s:
    #print("insidefor1,value of e is",e)
    if k.isupper() and k!='S':
        #print("Inside if1,k",k)
        t=k.lower()
        for i in pos:
            #print("inside for 2,i",i)
            d=0
            a=26
            if len(shift)==0:
                e=0
            elif i[0]==t:
                #print("inside if 2")
                for j in shift:
                    #print("insidefor 3,j",j)
                    d=dis(i[1],i[2],j[0],j[1])
                    #print("values",i[1],i[2],j[0],j[1])
                    a=min(d,a)
                    e=1
                    #print(a)
                p.append((abs(a),k))
    else:
        for i in pos:
            if i[0]==k:
                e=1
b=''
p.sort(key=lambda x:x[0])
for i in p:
	if i[1] not in b and i[0]>x*x:
		b+=i[1]
		e=1
		ans=len(b)
	
if e==0:
    print(-1)
else:
    print(ans)
        


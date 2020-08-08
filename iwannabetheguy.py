n=int(input())
l=list(map(int,input().split()))
l.remove(l[0])
k=list(map(int,input().split()))
k.remove(k[0])
l.extend(k)
m=0
for i in range(1,n+1):
	if (not(i in l)):
		m=1
		print("Oh, my keyboard!")
		break

if (m==0):
	print("I become the guy.")

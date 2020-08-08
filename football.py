n=int(input())
l=[]
for i in range(n):
    l.append(input())
winner=l[0]
for i in l:
    if l.count(i)>l.count(winner):
        winner=i
print(winner)

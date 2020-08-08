n=int(input())
x=input()
ca=0
cd=0
for i in x:
    if i=='A':
        ca+=1
    else:
        cd+=1
if ca>cd:
    print("Anton")
elif cd>ca:
    print("Danik")
else:
    print("Friendship")
    

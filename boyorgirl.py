a=input()
temp=[]
count=0
for i in a:
    if i not in temp:
        count+=1
        temp.append(i)
if count%2!=0:
    print("IGNORE HIM!")
else:
    print("CHAT WITH HER!")

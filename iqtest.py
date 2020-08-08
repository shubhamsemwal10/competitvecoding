l=[]
b=1
for i in range(4):
    l.append(input())
for i in range(3):
    for j in range(3):
        count=0
        if l[i][j]==l[i][j+1]:
            count+=1
           # print("case1",l[i][j],l[i][j+1],i,j)
        if l[i+1][j]==l[i][j]:
            #print("case2",l[i+1][j],l[i][j],i,j)
            count+=+1
        if l[i+1][j+1] == l[i][j] :
            #print("case3",l[i+1][j+1],l[i][j],i,j)
            count+=1
        if l[i][j+1]==l[i+1][j+1] and l[i+1][j+1]==l[i+1][j] and l[i+1][j]==l[i][j+1]:
            print("YES")
            b=0
            #print(2)
            break
        if count>=2:
            print("YES")
            b=0
            #print("1")
            break
    if b==0:
        break
if b==1:
    print("NO")

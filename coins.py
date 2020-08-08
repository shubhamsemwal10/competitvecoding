D={"A":0,"B":0,"C":0}
def get_key(val):
    for key, value in D.items():
         if val == value:
             return key
for i in range(3):
    s=input()
    if s[1]=='>':
        D[s[0]]+=1
        #print("IF",D[s[0]])
    if s[1]=='<':
        D[s[-1]]+=1
        #print("ELSE",get_key(D[s[-1]]))
    
if D['A']==1 and D['B']==1 and D['B']==1:
    print("IMPOSSIBLE")
else:
    if D['A']==0:
        print("A",end='')
    elif D['B']==0:
        print("B",end='')
    elif D['C']==0:
        print("C",end='')
    if D['A']==1:
        print("A",end='')
    elif D['B']==1:
        print("B",end='')
    elif D['C']==1:
        print("C",end='')
    if D['A']==2:
        print("A",end='')
    elif D['B']==2:
        print("B",end='')
    elif D['C']==2:
        print("C",end='')

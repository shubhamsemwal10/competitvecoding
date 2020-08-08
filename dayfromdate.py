b,a,c=map(int,input().split())
l=['SUNDAY','MONDAY','TUESDAY','WEDNESDAY','THURSDAY','fRIDAY','SATURDAY']
if b==1 or b==10:
    m=0
if b==2 or b==3 or b==11: 
    m=3
if b==4 or b==7:
    m=6
if b==5:
    m=1
if b==6:
    m=4
if b==8:
    m=2
if b==9 or b==12: 
    m=5
c=c-2000
s=a+m+c+c//4+6
q=s%7
print(l[q])

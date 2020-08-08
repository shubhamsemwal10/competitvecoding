n=int(input())
x=input()
a=list(x)
s=0
t=0
if a.count("L")==0:
    s=x.rindex("R")+1
    t=s+1
    
elif a.count("R")==0:
    s=a.index("L")+1
    t=s-1
    
else:
    if a.count("R")==a.count("L"):
        s=a.index("R")+1
        t=s+1
    
    elif a.count("L")>a.count("R"):
        s=a.index("L")+abs(a.count("L")-a.count("R"))+1
        t=s-abs(a.count("L")-a.count("R"))
    elif a.count("R")>a.count("L"):
        s=x.rindex("L")+abs(a.count("L")-a.count("R"))+1
        t=s-abs(a.count("R"))
        
        
print(s,t)

try:
    n=input()
    l=[]
    if ord(n[0])>52 and ord(n[0])!=57:
        l.append(57-ord(n[0])+48)
    else:
        l.append(ord(n[0]))
    for i in range(1,len(n)):
        if ord(n[i])>52:
            l.append(57-ord(n[i])+48)
        else:
            l.append(ord(n[i]))

    for i in l:
        print(chr(i),end='')
except:
    pass

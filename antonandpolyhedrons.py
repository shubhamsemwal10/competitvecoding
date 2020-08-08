n=int(input())
s=0
for i in range(n):
    a=input()
    if a=='Tetrahedron':
        s+=4
    if a=="Cube":
        s+=6
    if a=="Octahedron":
        s+=8
    if a=="Dodecahedron":
        s+=12
    if a=="Icosahedron":
        s+=20
print(s)
    

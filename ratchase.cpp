#include <bits/stdc++.h>
using namespace std;
const int maxn=10;
int cr,cc,er,ec;
char arr[maxn][maxn];
bool flag=false;
void ratpath(int cr,int er,int cc,int ec,char arr[maxn][maxn])

{if(!flag){
   //cout<<"CALLED RATH PATH FOR THE VALUES<"<<cc<<" "<<cr;
    if(cr==er && cc==ec){
        arr[cr][cc]='1';
        //cout<<"INSIDE FINAL IF";
        arr[cr][cc]='1';
        for(int i=0;i<=er;i++)
            {
                for(int j=0;j<=ec;j++)
                    {
                    if(arr[i][j]!='1') cout<<"0 ";
                    else cout<<arr[i][j]<<" ";
                    }
            cout<<endl;
            }
       flag=true;
       return;
       }
    //cout<<"VF"<<flag;
    if(cr>er||cc>ec||cr<0||cc<0||arr[cr][cc]=='1') return;
    if (arr[cr][cc]=='X') return;
    arr[cr][cc]='1';
    ratpath(cr,er,cc+1,ec,arr);
    ratpath(cr,er,cc-1,ec,arr);
    ratpath(cr+1,er,cc,ec,arr);
    ratpath(cr-1,er,cc,ec,arr);
    arr[cr][cc]='0';
}
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>arr[i][j];

    ratpath(0,n-1,0,m-1,arr);
    if(!flag)
        cout<<"NO PATH FOUND";
}

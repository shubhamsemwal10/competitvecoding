#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c,d;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        bool g=0;
        for(int j=0;j<m;j++){
            if(a[i][j]=='S'&&g==0){
                cout<<-1;
                return 0;
            }
            else if(a[i][j]=='G')
                g=1;
        }
    }
    set<int> s;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            if(a[i][j]=='S')
                 c=j;

            else if(a[i][j]=='G')
                d=j;
    }
    s.insert(c-d);
    }
    cout<<s.size()<<endl;
    return 0;
}

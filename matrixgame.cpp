#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
    ll n,m,nm;
    cin>>n>>m;
    ll a[51][51];
    set <int> r,c;
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            if (a[i][j]==1)
                    r.insert(i),c.insert(j);
        }
        }
     int mn=min(n-r.size(),m-c.size());
        if (mn%2==1)
            cout<<"Ashish"<<endl;
        else
            cout<<"Vivek"<<endl;
  }
   return 0;
    }

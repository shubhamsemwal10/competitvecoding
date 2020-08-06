#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int mxN=2e5;
int main()
{
    int n,t,a[mxN];
    cin>>n>>t;
    for(int i=0;i<n;i++)
        cin>>a[i];
    ll lb=1,rb=1e18;
    while(lb<rb){
        ll mb=(lb+rb)/2,s=0;
        for (int i=0;i<n;++i)
            s+=min(mb/a[i],(ll) 1e9);
        if(s>=t){
            rb=mb;
        }
        else
            lb=mb+1;
    }
    cout<<lb;
return 0;
}

#include <bits/stdc++.h>

#define ll long long
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    ll  mfs=-1e18,ans=-1e18;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        mfs=max(0ll+a,mfs+a);
        ans=max(ans,mfs);
    }
    cout<<ans<<endl;
    return 0;
}

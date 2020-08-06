#include <bits/stdc++.h>
const int Mxn=2e5;
#define ll long long
using namespace std;
int main()
{
    int n,a[Mxn];
    ll ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int p=a[n/2];
    for(int i=0;i<n;i++){
        ans+=abs(a[i]-p);
    }
    cout<<ans<<endl;
    return 0;
}

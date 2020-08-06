#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5;
int main()
{
    long long n,t=0,d,ans=0;
    array <int,2> a[maxn];
    cin >>n;
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        t+=a[i][0];
        ans+=a[i][1]-t;
    }
    cout<<ans;
    return 0;

}

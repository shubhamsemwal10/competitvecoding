#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,m,k,ans;
    cin>>n>>m>>k;
    int a[n],b[m];
    for(int i=0;i<n;++i)
        cin>>a[i];
    for(int j=0;j<m;++j)
        cin>>b[j];
    sort(a,a+n);
    sort(b,b+m);
    for(int i=0,j=0;i<n;++i)
{
       while(j<m && b[j]<a[i]-k)
            ++j;
        if(j<m&&b[j]<=a[i]+k)
            ++j,++ans;
}
    cout<<ans;

    return 0;

}

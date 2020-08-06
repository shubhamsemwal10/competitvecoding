#include <bits/stdc++.h>
const int Mxn=2e5;
#define ll long long
using namespace std;
int main()
{
    int n,a[Mxn];
    int ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int ,int > m;
    for(int i=0,j=0;i<n;++i){
        while(j<n && m[a[j]]<1)
        {
            m[a[j]]++;
            ++j;
        }
        ans=max(j-i,ans);
        m[a[i]]--;
    }
    cout<<ans;
    return 0;
}

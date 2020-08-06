#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5;
int main()
{
    int n,x,a[maxn],n1[maxn];
    cin>>n>>x;
    long long s=0,ans=0;
    map <long long,int> mp;
    mp[0]++;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
        ans+=mp[s-x];
        mp[s]++;
        //cout<<"ans : "<<ans<<"mp[s-x] :"<<mp[s-x]<<" s: "<<s<<" MP[s]: "<<mp[s]<<endl;
    }
    cout<<ans;
}

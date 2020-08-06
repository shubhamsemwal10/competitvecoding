#include <bits/stdc++.h>
using namespace std;
const long long mod= 1000000007L;
#define ll long long
ll ex(ll base,ll exp,ll mod)
{
    ll t=1l;
    while(exp>0)
    {
        //cout<<"START"<<t<<": T   B: "<<base<<" EXP :"<<exp<<endl;
        if(exp%2 != 0)
            t=(t*base)%mod; //cout<<t<<": T "<<endl;
        base=(base*base)%mod;
        //cout<<"BASE: "<<base<<endl;
        exp/=2;
        //cout<<"EXP: "<<exp<<endl;
    }
    return t%mod;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        ll a,b,c,ans;
        cin>>a>>b>>c;
        ans=ex(a,ex(b,c,mod-1),mod);
        cout<<ans<<endl;
    }
return 0;
}

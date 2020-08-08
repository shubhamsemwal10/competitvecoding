#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,m;
bool valid(ll x,ll y)
{
     return x>0 && x<=n && y>0 && y<=m;
}
int main()
{
    ll k,x,y,dx,dy,ans=0,step;
    cin>>n>>m>>x>>y>>k;
    for(int i=0;i<k;i++){
        step=0;
        cin>>dx>>dy;
        ll l=0,r=1e9+9,mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(valid(x+(dx*mid),y+(dy*mid))){
                step=mid;
                l=mid+1;
            }
            else{
                    r=mid-1;
                 }
        }
        ans+=step;
        x+=(dx*step);
        y+=(dy*step);
    }
    cout<<ans<<endl;
    return 0;
}

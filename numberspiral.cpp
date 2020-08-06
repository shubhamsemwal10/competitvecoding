#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll x,y,ans=0;
        cin>>y>>x;
        ll a=max(x,y);
        ll z=(a-1)*(a-1);
        if(a%2){
            if(a==y){
                ans=z+x;

          }  else{
                ans=z+2*a-y;
            }
        }
        else{
                if(a==x){
                    ans=z+y;
                }
                else{
                    ans=z+2*a-x;
                }
        }
    cout<<ans<<endl;

    }

    return 0;
}

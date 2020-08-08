#include<bits/stdc++.h>
using namespace std;
int main(){
    int vp,a=0,vd,t,f,c,dp;
    cin>>vp>>vd>>t>>f>>c;
    dp=t*vp;
    if(vd<vp){
        cout<<0;
        return 0;
    }
    while(dp<c)
    {
        double td=dp/(vd-vp);
        dp+=td*vp;
        if(dp>=c){
            break;
        }
        double tb=dp/vd+f;
        dp+=tb*vp;
        ++a;
    }

    cout<<a;
 return 0;
}

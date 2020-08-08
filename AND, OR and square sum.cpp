#include<bits/stdc++.h>
#define ll long long ;
using namespace std;

int main(){
    int n;
    cin>>n;
    ll binary[21]={0};
    for(int i=0,i<n,i++){
    ll x;
    cin>>x;
    ll v=0;
    while(x){
        if(x&1)
            binary[v++];
        x=x>>1;
        v++;
    }
    }
    ll f_ans=0;
    for(int i=0,i<n,i++){
        ll val=0;
        for(int v=0,v<21,v++){
            if(binary[v]){
                val=val+(1<<v);
                binary[v]--;
    }
    f_ans+=val*val;
    }
    cout<<f_ans;
    return 0;
}

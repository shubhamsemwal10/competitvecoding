#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long ans=0;
    int mx=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x=0;
        cin>>x;
        mx=max(x,mx);
        ans+=mx-x;
    }
    cout<<ans;
return 0;}

#include <bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int main(){
    long long n,s=1;
    cin>>n;
    for(int i=0;i<n;i++){
        s=s*2%(int(mod));
    }
    cout<<s;

return 0;}

#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5;
int main()
{
    long long n,s=0,t[maxn];
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>t[i];
        s+=t[i];
        //cout<<s<<endl;
    }
    sort(t,t+n);
    cout<<max(s,(long long) 2*t[n-1]);
    return 0;
}


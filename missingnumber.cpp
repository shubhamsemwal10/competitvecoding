#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s,a,ts=0;
    cin>>n;
    s=(n*(n+1))/2;
    for(int i=0;i<n-1;i++){
        cin>>a;
        ts+=a;
    }
    cout<<s-ts;
    return 0;
}

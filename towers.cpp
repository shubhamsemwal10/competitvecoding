#include <bits/stdc++.h>
const int Mxn=2e5;
#define ll long long
using namespace std;
int main()
{
    int n,a;
    ll ans=0;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++){
        cin>>a;
        int p=upper_bound(v.begin(),v.end(),a)-v.begin();
        if(p<v.size())
            v[p]=a;
        else
            v.push_back(a);
    }
    cout<<v.size();
    return 0;

}


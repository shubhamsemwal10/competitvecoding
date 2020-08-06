#include <bits/stdc++.h>
#define ll long long
#define ar array

const int mxN=2e5;
using namespace std;

int main()
    {

    ll n,m;
    cin >> n >> m;
    set<array<int,2>> s;
    for(int i=0;i<n;++i)
       {
        ll a;
        cin>>a;
        s.insert({a,i});
       // cout<<"A AND I"<<a<<"/t"<<i<<endl;
    }
    for(int i=0;i<m;i++)
    {
        ll t;
        cin>>t;
        auto it=s.lower_bound({t+1,0});
        //cout<<(*it)[0]<<" mid :: "<<(*it)[1]<<endl;
        if(it==s.begin())
            cout<<"-1\n";
        else{
            --it;
            cout<<(*it)[0]<<endl;
            s.erase(it);
        }
    }
    return 0;
}

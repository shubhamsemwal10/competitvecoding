#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pp pair<ll,ll>
int main()
{
    ll n,x,y,i,j,k;
    cin>>n;
    map<ll,vector<ll>> mp;
    for(i=0;i<n;i++){
        cin>>x;
        mp[x].push_back(i);
    }
    vector<pp> v;
    map<ll,vector<ll>>::iterator p=mp.begin();
    while(p!=mp.end()){
        k=p->first;
        if(mp[k].size()==1)
            v.push_back({k,0});
        else{
            set<ll> s;
            for(i=1;i<mp[k].size();i++)
                s.insert(mp[k][i]-mp[k][i-1]);
            set<ll>::iterator q=s.begin();
            if(s.size()==1)
                v.push_back({k,*q});
        }
        p++;
        }
        cout<<v.size()<<endl;
        for(i=0;i<v.size();i++)
            cout<<v[i].first<<" "<<v[i].second<<endl;

    return 0;
}

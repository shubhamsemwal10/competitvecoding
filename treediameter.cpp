#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5;
vector <int> adj[maxn];
int n,d[maxn],ans;
void  dfs(int u=0,int p=-1)
{
    for(int v:adj[u])
    {
        if(v==p) continue;
        dfs(v,u);
       // cout<<"inside dfs"<<d[u]<<" :du "<<d[v]<<"dv"<<endl;
        ans=max(d[u]+d[v]+1,ans);
        d[u]=max(d[u],d[v]+1);
    }

}
int main()
{
    cin>>n;
    for(int i=1;i<n;++i)
    {
        int p,q;
        cin>>p>>q,--p,--q;
    //    cout<<"values of p and q"<<p<<" : "<<q<<endl;
        adj[p].push_back(q);
        adj[q].push_back(p);
    }
    dfs();
    cout<<ans;
}

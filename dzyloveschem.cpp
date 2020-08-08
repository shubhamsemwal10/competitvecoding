
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <ll> adj[500];
bool vis[500];
void dfs(ll s){
    vis[s]=1;
    for(int i=0;i<adj[s].size();i++){
        if(!vis[adj[s][i]])
            dfs(adj[s][i]);
    }
}
int main()
{
    ll j,i,k,n,m,u,v;
    cin>>n>>m;
    if(n==1){
        cout<<1;
        return 0;
    }
    for(i=0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll x=0;
    memset(vis,0,sizeof(vis));
    for(i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
            x++;
        }
    }
    cout<<(ll) pow(2,n-x)<<endl;
return 0;}


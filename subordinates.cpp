#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5;
int n,s[maxn];
vector <int > adj[maxn];

void dfs(int u=0,int p=-1)
{
    s[u]=1;
    for(int v:adj[u])
    {
        dfs(v,u);
        s[u]+=s[v];
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<n;++i)
    {
        int p;
        cin>>p ,--p;
        adj[p].push_back(i);
    }
    dfs();
    for(int i=0;i<n;i++)
        cout<<s[i]-1<<" ";
    return 0;
}

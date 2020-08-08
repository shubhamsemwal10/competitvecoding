#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,c,q[105],sum=0;
    memset(q,0,sizeof q);
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a>>b>>c;
        q[b]-=c;
        q[a]+=c;
    }
    for(int i=1;i<=4n;i++){
        if(q[i]<0){
            sum+=(-1*q[i]);
        }
    }
    cout<<sum<<endl;
    return 0;
}

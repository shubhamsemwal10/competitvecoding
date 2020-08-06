#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5;
int n,k;
int main()
{
    cin>>n>>k;
    long long a[maxn];
    for(int i=0;i<n;++i)
        cin>>a[i];
    long long lb=*max_element(a,a+n),rb=1e18;
    while(lb<rb){
        long long mb=(lb+rb)/2;
        int c=0;
        long long s=0;
        for(int i=0;i<n;++i){
            if (a[i]+s>mb){
                ++c;
                s=0;
            }
            s+=a[i];
        }
        ++c;
        if(c>k)
            lb=mb+1;
        else
            rb=mb;
    }
        //cout<<"ans : "<<ans<<"mp[s-x] :"<<mp[s-x]<<" s: "<<s<<" MP[s]: "<<mp[s]<<endl;
    cout<<lb<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
const int maxn=5e3;
using namespace std;
int main()
{
    long long n,x;
    array <int ,2> a[maxn];
    cin>>n>>x;
    for(int i=0;i<n;++i){
        cin>>a[i][0];
        a[i][1]=i+1;
    }
    sort(a,a+n);
    for(int i=0;i<n;++i){
        long long x2=x-a[i][0];
        for(int j=i+1,k=n-1;j<k;++j){
            while(j<k && a[j][0]+a[k][0]>x2)
                --k;
            if(j<k && a[j][0]+a[k][0]==x2){
                cout<<a[i][1]<<" "<<a[k][1]<<" "<<a[j][1]<<endl;
                return 0;
            }
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}

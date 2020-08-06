#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5;
int main()
{
    int n,a[maxn],n1[maxn];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        n1[i]=i-1;
        cout<<"1       value  "<< n1[i]<<" ::: "<<~n1[i]<<" : negation value"<<" a[n1[i]]: "<<a[n1[i]]<<" a[i] "<<a[i]<<endl;
        while(~n1[i]  && a[n1[i]]>=a[i])
            {
            cout<<"2       value  "<< n1[i]<<" ::: "<<~n1[i]<<" : negation value"<<" a[n1[i]]: "<<a[n1[i]]<<" a[i] "<<a[i]<<endl;
            n1[i]=n1[n1[i]];
            }
        cout<<n1[i]+1<<" ans "<<endl;
    }
}

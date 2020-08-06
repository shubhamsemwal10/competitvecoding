#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        long long k=i*i;
        long long a=k*(k-1)/2;
        if(i>2)
            a-=4*(i-2)*(i-1);
        cout<<a<<endl;
        }
    return 0;
}

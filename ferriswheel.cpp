#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long x;
    cin>>n>>x;
    long long arr[n];
    for(int i=0;i<n;i++)
            cin>>arr[i];
    sort(arr,arr+n);
    int ans;
    for(int i=0,j=n-1;i<j;)
        {
        while(i<j && arr[i]+arr[j]>x)
            --j;
        if(i>=j)
            break;
        ++ans;
        ++i,--j;
        }
    cout<<n-ans;

}

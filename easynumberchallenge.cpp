#include<bits/stdc++.h>
using namespace std;
long long sol[1000001];
long long divisors(long long n)
{
    long a=0;
    if(sol[n]!=0)
        return sol[n];
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
                a+=1;
            else
                a+=2;
        }
    }
    sol[n]=a;
    return a;
}
int main()
{
    int a,b,c,ans=0;
    cin>>a>>b>>c;
    for(int i=1;i<=a;i++)
        for(int j=1;j<=b;j++)
            for(int k=1;k<=c;k++)
            {
                int d=i*j*k;
                ans+=divisors(d);
            }
    cout<<ans;
    return 0;
}

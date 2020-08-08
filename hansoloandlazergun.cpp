#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    set <double>slopes;
    ll n,x,y;
    double xo,yo;
    bool v=0;
    cin>>n>>xo>>yo;
    for(int i =0;i<n;i++)
    {
        cin>>x>>y;
        if(x==xo) v=1;
        else slopes.insert((y-yo)/(x-xo));
    }
    cout<<v+slopes.size();
    return 0;
}


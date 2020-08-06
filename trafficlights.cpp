#include <bits/stdc++.h>
const int Mxn=2e5;
#define ll long long
using namespace std;
int main()
{
    int n,x,point ,left ,right;
    cin>>x>>n;
    set <int> points ={0,x};
    multiset <int> lengths={x};
    for(int i=0;i<n;i++){
        cin>>point;
         auto it=points.upper_bound(point);

         left=*prev(it);
         right= *it;

        lengths.erase(lengths.find(right-left));
        lengths.insert(point-left);
        lengths.insert(right-point);

        points.insert(it,point);

        cout<<*lengths.rbegin()<<" ";

    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    set <int> s;
    cin>>n;
    while(n--)
    {
        cin>>a;
        s.insert(a);
    }
    cout<<s.size();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char t='A';
    int ans=0,c=0;
    for(auto a : s){
        if(a==t){
            ++c;
            ans=max(ans,c);
            }
        else{
            t=a;
            c=1;
        }
    }
     cout<<ans;

}

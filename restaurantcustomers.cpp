#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<array<int ,2>> s;
    for(int i=0;i<n;++i){
        int a,b;
        cin>>a>>b;
        s.insert({2*a,1});
        s.insert({2*b+1,-1});
        //for(array<int,2>a:s){
          //  for(int q:a){
            //    cout<<q<<" ";
            //}
            //cout<<endl;
       // }

        }
        int ans=0,c=0;
        for(array<int,2>a:s){
            c+=a[1];
            ans=max(c,ans);
         //   cout<<a[1]<<" ANS "<<ans<<endl;


        }
        cout<<ans;
    return 0;
}

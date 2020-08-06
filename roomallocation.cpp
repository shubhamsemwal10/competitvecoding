#include <bits/stdc++.h>
#include <ios>
using namespace std;
#define pii pair<int,int>
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,y;
    cin>>n;
    vector<pair<int,pii>> v;
    for(int i =1;i<=n;i++){
        cin>>x>>y;
        v.push_back({x,{-1,i}}); //goes in
        v.push_back({y,{1,i}});//goes out
    }
    //for(auto ele:v){
      //  cout<<ele.first<<" : "<<ele.second.first<<" : "<<ele.second.second<<endl;
   // }
    sort(v.begin(),v.end());
   // cout<<"SORTIN"<<endl;
    //for(auto ele:v){
      //  cout<<ele.first<<" : "<<ele.second.first<<" : "<<ele.second.second<<endl;
    //}
    vector<int> rooms;
    int occupied=0,max_rooms=0,in_or_out,ind;
    int ans[200005];
    for(auto ele:v){
        in_or_out=ele.second.first;
        ind=ele.second.second;
        if(in_or_out==1){
            rooms.push_back(ans[ind]);
            //cout<<"if "<<ans[ind]<<endl;
        }
        else if(occupied==rooms.size())
        {

            ans[ind]=++max_rooms;
          //  cout<<"ELSE IF "<<ans[ind]<<"MAX ROOMS "<<max_rooms<<endl;
        }
        else
        {
            ans[ind]=rooms[occupied++];
        //    cout<<"ELSE "<<ans[ind]<<"ROOMS "<<rooms[occupied]<<" OCCUPIEd"<<occupied<<endl;

        }

    }
    cout<<max_rooms<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }


    return 0;
}

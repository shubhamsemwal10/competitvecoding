#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    set<int> q;
    for (int i=0;i<n;i++){
        cin>>x;
        q.insert(x);
    }
    if(q.size()<3){
        cout<<"YES";
    }
    else if(q.size()>3){
        cout<<"NO";
    }
    else{
        int arr[3];
        arr[0]=*q.begin();
        arr[1]=*(++(q.begin()));
        arr[2]=*(--(q.end()));
        if (arr[1]-arr[0]==arr[2]-arr[1]){
        cout<<"YES";
            }
        else{
            cout<<"NO";
        }
}
    return 0;
}

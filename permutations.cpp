#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1){
        cout<<1;
    }
    else if(n==2 || n==3){
        cout<<"NO SOLUTION";
    }
    //2 4 1 3
    else if(n%2==0){
        for(int i=2;i<n+1;i+=2){
            cout<<i<<" ";
        }
        for(int i=1;i<n;i+=2){
            cout<<i<<" ";
        }
    }//4 2 5 3 1
    else{
    for(int i=n-1;i>1;i-=2){
            cout<<i<<" ";
    }
    for(int i=n;i>=1;i-=2){
        cout<<i<<" ";
    }
    }
    return 0;
}

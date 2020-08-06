#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n*(n+1)/2%2)
    {
    cout<<"NO";
    return 0;
    }
    int mid=n/2;
    //4 ,1 2 4 7 , 3 5 6
    int i=1,j;
    vector <int> v1,v2;
    if(n%4)
        j=3;
    else
        j=4;
    for(int i=0;i<(n-1)/4;++i){
        v1.push_back(4*i+j+1);
        v1.push_back(4*i+j+4);
        v2.push_back(4*i+j+2);
        v2.push_back(4*i+j+3);
    }
    if(n%4){
        v1.push_back(1);
        v1.push_back(2);
        v2.push_back(3);
    }
    else{
        v1.push_back(1);
        v1.push_back(4);
        v2.push_back(2);
        v2.push_back(3);

    }
    cout<<"YES"<<endl;
    cout<<v1.size()<<endl;
    for(int i:v1){

        cout<<i<<" ";
    }
    cout<<endl;
    cout<<v2.size()<<endl;
    for(int i:v2){
        cout<<i<<" ";
    }
    return 0;
}

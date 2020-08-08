#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,w=0;
    cin>>n>>m;
    while(n!=m){
        if(m>n){
            if(m%2==0){
                    m=m/2;
                    w++;
            }
            else{
                m++;
                w++;
            }
        }
        else if(n>m){
                m++;
                w++;
        }
    }
    cout<<w<<endl;


return 0;}


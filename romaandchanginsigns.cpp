#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,nc=0,c,pc=INT_MAX;
    cin>>n>>k;
    int a[100000];
    for (int i=0;i<n;i++)
            cin>>a[i];
    for(int i=0;i<n;i++){
        if((a[i]<0)&&(k>0)){
            a[i]*=-1;
            k--;
            }
        c+=a[i];
        pc=min(a[i],pc);
        }
        if(k%2==1){
            c-=2*pc;
        }
        cout<<c;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

const int mxN=2e5;

int n,k;
ll a[mxN],sb,st;
array<int,2> med={-1};
set<array<int,2>> top,bot;

void fix(){
int m=bot.size()+top.size()+1;
    if(bot.size()<((m-1)/2)){
        bot.insert(med);
        sb+=med[0];
        med=*top.begin();
        top.erase(med);
        st-=med[0];
    }
    if(bot.size()>(m-1)/2)
    {
        top.insert(med);
        st+=med[0];
        med=*--bot.end();
        bot.erase(med);
        sb-=med[0];
    }
}

void add(ar<int,2> x)
{
    if(med[0]==-1)
    {   med=x;
        return ;
    }
    else if(x<med)
        {bot.insert(x);
        sb+=x[0];
    }
    else{
        st+=x[0];
        top.insert(x);
        }
    fix();
    }
void rem(ar<int,2> x)
{   if (x==med)
    {
    med=*top.begin();
    top.erase(med);
    st-=med[0];
    }
    else if(x<med)
    {
    bot.erase(x); sb-=x[0];
    }else{
        top.erase(x); st-=x[0];
    }fix();
}
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;++i)
        cin>>a[i];
    for(int i=0;i<k-1;++i)
        add({a[i],i});
    for(int i=k-1;i<n;++i)
    {
        add({a[i],i});
        cout<<st-med[0]*(ll)top.size()+med[0]*(ll)bot.size()-sb<<" ";
        rem({a[i-k+1],i-k+1});
    }

}


#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int main()
{
    string x;
    cin>>x;
    map <char,string> m;
    for(char c : x){
        if(m.count(c)){
            m[c]+=c;
        }
        else{
            m[c]=c;
        }
    }
    string fir="",las="",odd="";
    char c;
    for(auto c : m){
        if(c.second.length()%2==1 && odd != "")
        {
            cout<<"NO SOLUTION"<<endl;
            return 0;
        }
        else if(c.second.length()%2==1)
                        odd=c.second;

    else{
        fir=c.second.substr(0,c.second.length()/2)+fir;
       las+=c.second.substr(0,c.second.length()/2);
        }
    }
    cout<<fir+odd+las<<endl;
    return 0;
}

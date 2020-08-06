#include <bits/stdc++.h>
using namespace std;
int ans;
vector <string> v;
void permute(string str){
 sort(str.begin(),str.end());
    do{
        v.push_back(str);
    }while (next_permutation(str.begin(),str.end()));

}
int main(){
    string s;
    cin>>s;
    permute(s);
    cout<<v.size()<<endl;
    for(auto a:v){
        cout<<a<<endl;
    }
    return 0;

}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <string> ans;
    int n;
    cin>>n;
    string mi,a;
    for(int h=0;h<12;h++){
        for(int m=0;m<60;m++){
                if(__builtin_popcount(h)+__builtin_popcount(m)==n){
                    mi= m<10 ? "0" + to_string(m) : to_string(m);
                    a=to_string(h)+":"+mi;
                    ans.push_back(a);
                    }
        }
    }
   return ans;







    return 0;

}

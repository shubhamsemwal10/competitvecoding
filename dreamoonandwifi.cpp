#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int fact(int n){
    if(n==1 || n==0){
            return 1;
    }
    else{
            return n*fact(n-1);
           } }
int main(){
    int i,c=0,d=0,e=0,ans=0;
    string s1,s2;
    cin>>s1>>s2;
    for(i=0;s2[i]=='\0';i++){
       if(s2[i]=='+')
           d++;
        else if(s2[i]=='-')
            d--;
        else
            e++;
    }
        for(i=0;s1[i]!='/0';i++){
            s1[i]=='+' ? c++ : c--;
        }
if(!e){
    d==c ? cout<<"1.000000000000" : cout<<"0.000000000000";
}
else{
        i=e+(c-d);
        if(i%2 == 0 && i/2>=0 && i/2<=e){
        ans=fact(e)/(fact(e-i/2)*fact(i/2));
        //ans=fact(e)/((fact(e-i/2)*fact(i/2));
       printf("%0.12f",double(ans)/double(pow(2,e)));
       // printf("%0.12f",double(ans)/double(pow(2,e)));
     }

     else
       cout<<"0.000000000000";
}
return 0;
}

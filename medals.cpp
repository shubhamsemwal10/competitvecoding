#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s,k,i,m,y[m],p1=INT_MIN,r1=INT_MIN,p2=INT_MAX;
    for(i=0;i<n;i++){
        cin>>s;
        if (s>r1){
            r1=s;
            //cout<<"value of r1 ,s "<<r1<<s<<endl;
        }
        }
    cin>>m;
    //cout<<"Value of r1 "<<r1<<endl;
     for(i=0;i<m;i++){
        cin>>s;
        if(s>p1){
            p1=s;
        }
    }
    //cout<<"value of p1 "<<p1<<endl;
    // p1=2 r1=6 p2=6 for bleh
    cin>>k;
    for(i=0;i<k;i++){
        cin>>s;
        if (s<p2){
            p2=s;
        }
    }
    double r=r1;
    double p=p1;
    double P=p2;
    double a,b;
    //cout<<"VALue of p2 "<<p2<<endl;
    cin>>a>>b;
    double r2=((double)b*p*r*r)/((double)a*P+b*p);  //a=R*R*p2
    cout<<fixed<<setprecision(12)<<sqrt(r2)<<endl;    //b=r*r*p1
    return 0;     //R*R=a*r*r*p1
                    //  p2

}


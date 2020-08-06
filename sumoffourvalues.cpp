#include <bits/stdc++.h>
using namespace std;
vector <int> v;
class pairsum{
public :
    int first;
    int sec;
     int sum;
};
int compare(const void* a,const void* b){
    return (
         (*(pairsum*)a).sum
        - (*(pairsum*)b).sum);
        }
bool nocommon(pairsum a,pairsum b)
{
    if(a.first==b.first||a.first==b.sec
       ||a.sec==b.first||a.sec==b.first)
        return false;
    return true;
}
void findfourelemets(int arr[],int n,int x)
{
    int i,j;
    int size=(n*(n-1))/2;
    pairsum aux[size];
    int k=0;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            aux[k].sum=arr[i]+arr[j];
            aux[k].first=i;
            aux[k].sec=j;
            k++;
        }
    }
    qsort(aux,size,sizeof(aux[0]),compare);
    i=0;
    j=size-1;
    while(i<size && j>=0)
    {
        if(
           (aux[i].sum+aux[j].sum==x)
            && nocommon(aux[i],aux[j]))
            {
                v.push_back(arr[aux[i].first]);
                v.push_back(arr[aux[i].sec]);
                v.push_back(arr[aux[j].first]);
                v.push_back(arr[aux[j].sec]);
            return;
                }
        else if (aux[i].sum+aux[j].sum<x)
            i++;
        else
            j--;
    }
}
const int maxn=2e5;
int main()
{
    int n,x,arr[maxn];
    cin>>n>>x;
    array <int,2> ans[maxn];
    for(int i=0;i<n;i++)
        {
        cin>>arr[i];
        ans[i][0]=arr[i];
        ans[i][1]=i;
        }
    findfourelemets(arr,n,x);
    //if(v.size()==4){
    for(auto i:v){
       cout<<i<<endl;
       /* int j=0;
        while(j<n){
            if(ans[j][0]==i){
                cout<<ans[j][1]+1<<" ";
            }
            j++;
        }
    }
    }
    else{
        cout<<"IMPOSSIBLE"<<endl;
    }*/
}

}

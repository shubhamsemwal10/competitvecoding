#include <bits/stdc++.h>
using namespace std;
void print_vector(vector<auto> v){
   for(int i = 0; i<v.size(); i++){
      cout << v[i] << " ";
   }
}
class solution{
public:
    multiset <double> arr;
    void insert(double x){
        arr.insert(x);
    }
    void delete_(double x){
        arr.erase(arr.find(x));
    }
    double getMedian(){
        int n=arr.size();
        double a=*next(arr.begin(),n/2-1);
        double b=*next(arr.begin(),n/2);
        if(arr.size()&1) return b;
        return (a+b)*0.5;
    }
    vector <double> medianslidingwindow(vector <double> &nums,int k)
    {
        vector <double> ans;
        arr.clear();
        for(int i=0;i<k;i++){
            insert(nums[i]);
        }
        for(int i=k,j=0;i<nums.size();i++,j++)
        {
            ans.push_back(getMedian());
            delete_(nums[j]);
            insert(nums[i]);
        }
        ans.push_back(getMedian());
        return ans;
    }
};
int main()
{
    solution on;
    int n,x;
    double a;
    cin>>n>>x;
    vector <double> v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    print_vector(on.medianslidingwindow(v,x));
}

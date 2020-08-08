#include<bits/stdc++.h>
using namespace std;
class graph
{
    int arr[26][2];
    vector <int> alpha;
    vector <int> answer;
public:
    graph()
    {
        for(int i=0;i<26;i++){
            for(int j=0;j<2;j++){
                arr[i][j]==-1;
            }
        }
        alpha=vector<int>(26);
    }
    void dfs(int v)
    {
        answer.push_back(v);
        alpha[v]=1;
        for(int i=0;i<2;i++){
           if (alpha[arr[v][i]] == 1
				|| arr[v][i] == -1)
                cout<<alpha[arr[v][i]]<<arr[v][i] <<"inside dfs for v ="<<v<<endl;
                continue;
            dfs(arr[v][i]);

        }
    }
    void minString(string str)
    {
        if(str.length()==1){
            cout<<str<<"\n";
            return;
        }
        bool flag=true;
        //loop to find adjacency
        //list of the given string
        for(int i=0;i<str.length()-1;i++)
        {
            int j=str[i]-'a';
            int k=str[i+1]-'a';
            if (arr[j][0]==k||arr[j][1]==k){

            }
            else if(arr[j][0]==-1){
                arr[j][0]=k;
                cout<<"inside min string ,finding adjaency ,j,else if 1"<<arr[j][1]<<"valeu of j"<<j<<endl;
            }
            else if(arr[j][1]==-1)
             {

              cout<<"inside min string ,finding adjaency ,j,else if 2"<<"Valye of j"<<j<<arr[j][0]<<endl;
                arr[j][1]=k;
            }//condtion if char
            //have more than two diff
            //adjacent character
            else{
                flag=false;
                break;
            }
            if(arr[k][0]==j||arr[k][1]==j){}
            else if(arr[k][0]==-1){
                arr[k][0]=j;
                cout<<"inside min string ,finding adjaency ,k,else if 1"<<arr[k][1]<<endl;
            }
            else if(arr[k][1]==-1){
                cout<<"inside min string ,finding adjaency ,k,else if 2"<<"Valye of k"<<k<<arr[k][0]<<endl;
                arr[k][1]=j;}
            else{
                flag=false;
                break;
            }
        }
            //variable to check string contains
            //two end chars or not
            bool contain_ends=false;
            int count=0;
            int index;
            for(int i=0;i<26;i++){
                //condition if char has
                //only one type of ajacent
                //character
                if((arr[i][0]==1&&arr[i][1]!=-1)||arr[i][1]==-1&&arr[i][0]!=-1){
                    count++;
                    index=i;
                    cout<<"arr[i][1]"<<arr[i][1]<<"ARR[i][0]"<<arr[i][0]<<endl;
                    cout<<"COunt and index"<<count<<i<<endl;

                }
                if(count==2)
                    contain_ends=true;
                if(count==3)
                    contain_ends=false;
            }
            if(contain_ends==false||flag==false){
                cout<<"Impossible"<<"\n";
                return;
            }
            //depth first search traversal
            //on one of the possible end char of the string;
        dfs(index);
        //loop to print answer
        for(int i=0;i<answer.size();i++){
            char ch=answer[i]+'a';
            cout<<ch<<"at"<<i<<answer[i];
        }
    }
};

int  main()
{
    string s;
    cin>>s;
    graph g;
    g.minString(s);
    return 0;
}



















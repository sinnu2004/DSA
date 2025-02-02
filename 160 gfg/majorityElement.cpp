#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    int arr[] = {2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    map<int,int> m;
    pair<int,int> p;
    for(int i=0;i<n;i++){
        p.first = arr[i];
        int x = p.first;
        if(m.find(x)!=m.end()) m[x]++;
        else m.insert(p);
    }
    for(auto x : m){
        cout<<x.first<<" "<<x.second<<endl;
        //cout<<m[x.first]<<endl;
    }
    vector<int> ans;
    for(auto x : m){
        if(m[x.first]>=n/3) ans.push_back(x.first);
    }
    cout<<ans.size();
    cout<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
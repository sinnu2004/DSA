#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main(){
    int a[] = {1,2,3,3};
    int b[] = {1,1,2,2};
    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);
    vector<int> arr(a,a+n);
    vector<int> brr(b,b+m);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int j=0;j<m;j++){
        cout<<brr[j]<<" ";
    }
    cout<<endl;
    unordered_map<int,int> m1;
    for(int i=0;i<n;i++){
        pair<int,int> p1;
        p1.first = arr[i];
        if(m1.find(p1.first)==m1.end()) m1.insert(p1);
        //else m1.insert(p1);
    }
    for(auto x : m1){
        cout<<x.first<<" "<<x.second<<" ";
    }
    cout<<endl;
    unordered_map<int,int> m2;
    for(int i=0;i<m;i++){
        pair<int,int> p2;
        p2.first = brr[i];
        if(m2.find(p2.first)==m2.end()) m2.insert(p2);
        //else m2.insert(p2);
    }
    for(auto x : m2){
        cout<<x.first<<" "<<x.second<<" ";
    }
    cout<<endl;
    vector<int> v;
    for(auto x : m1){
        int fre = x.first;
        if(m2.find(fre)==m2.end()) v.push_back(fre);
    }
    vector<int> v1;
    for(auto x : m2){
        int fre = x.first;
        if(m1.find(fre)==m1.end()) v1.push_back(fre);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    vector<vector<int> > ans;
    ans.push_back(v);
    ans.push_back(v1);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
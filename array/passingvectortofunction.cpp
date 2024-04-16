#include<iostream>
#include<vector>
using namespace std;
change(vector<int> a){ // pass by reference
    a[0] = 100;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
change2(vector<int>& b){
    b[0] = 10;
}
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(5);
    v.push_back(8);
    v.push_back(4);
    v.push_back(3);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change2(v);
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
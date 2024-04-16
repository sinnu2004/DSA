#include<iostream>
#include<vector>
using namespace std;  // capacity of vector does not change but the size can change 
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(0);
    v.push_back(7);
    v.push_back(4);
    v.push_back(3);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
}
    cout<<endl;
    cout<<"size is :"<<v.size()<<endl;
    cout<<"capacity is :"<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"size is :"<<v.size()<<endl;
    cout<<"capacity is :"<<v.capacity()<<endl;
}
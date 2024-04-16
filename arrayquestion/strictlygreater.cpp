#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    v.push_back(5);
    v.push_back(8);
    v.push_back(1);
    v.push_back(6);
    int count = 0;
    int x = 1;
    for(int i=0;i<v.size();i++){
        if(v[i]>x) count++;   // 8
    }
    cout<<count<<endl;
}
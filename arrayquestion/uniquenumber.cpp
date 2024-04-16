#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(9);   // 0
    v.push_back(8);    // 1
    v.push_back(8);    // 2     
    v.push_back(3);   // 3 
    v.push_back(6);   // 4 
    v.push_back(6);   // 5
    v.push_back(2);  // 6
    v.push_back(2);  // 7
    v.push_back(4);  // 8 
    v.push_back(4);  // 9
    v.push_back(0);  // 10
    v.push_back(0); // 11
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]==v[j]) v[i]=v[j] = -1;
        }
    }
    int unique = 0;
    for(int i=0;i<v.size();i++){
        if(v[i]>0){
            unique= v[i];
        }
    }
    cout<<unique<<endl;
}
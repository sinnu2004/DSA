#include<iostream>
#include<vector>
using namespace std;
void sortOddEven(vector<int>& a){
    for(int i=0;i<a.size();i++){
        for(int j=a.size()-1;j>=0;j--){
            if(a[i]%2==0) 
    }
}
}
int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(9);   // 0
    v.push_back(8);    // 1
    v.push_back(4);    // 2  
    
    v.push_back(3);   // 3 
    v.push_back(8);   // 4 
    v.push_back(6);   // 5
    v.push_back(2);  // 6
    v.push_back(1);  // 7
    v.push_back(5);  // 8 
    v.push_back(4);  // 9
    v.push_back(0);  // 10
    sortOddEven(v);
}
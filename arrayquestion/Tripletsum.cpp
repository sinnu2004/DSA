#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
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

    int x = 5;
    int count = 0;
    for(int i=0;i<v.size()-2;i++){
        for(int j=i+1;j<v.size()-1;j++){
            for(int k=j+1;k<v.size();k++){
                if(v[i]+v[j]+v[k]==x){
                    cout<<"("<<i<<","<<j<<","<<k<<")"<<endl;
                    count++;
                }
            }
        }
    }
    cout<<count;  
}
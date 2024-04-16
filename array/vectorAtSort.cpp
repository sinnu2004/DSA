#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;  // capacity of vector does not change but the size can change 
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(0);
    v.push_back(7);
    //cout<<v.at(2)<<endl;
    //v.at(2)=4;
    //cout<<v.at(2);

// sorting it means arrange the elements in ascending order

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

}
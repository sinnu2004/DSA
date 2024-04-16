#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(8);
    v.push_back(3);
    v.push_back(5);
    v.push_back(4);
    v.push_back(8);
    v.push_back(7);
    v.push_back(6);
    v.push_back(3);
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;
    for(int i=0;i<v.size();i++){  //9 8 7 
        if(max1<v[i]) max1 = v[i];
        if(max2<v[i] && max2!=max1) max2 = v[i];
        if(max3<v[i] && max3!=max1 || max3!=max2) max3 = v[i];

    }
    cout<<max1<<" "<<max2<<" "<<max3<<endl;
}
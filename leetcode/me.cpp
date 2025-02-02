#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[] = {1,2,4,0,0,0};
    int m = 3;
    int n = 3;
    vector<int> num(a,a+m+n);
    for(int i=0;i<num.size();i++){
        cout<<num[i]<<" ";
    }

}
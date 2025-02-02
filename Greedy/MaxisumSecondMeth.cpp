#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int a[] = {2,-3,-1,5,-4};
    int n = sizeof(a)/4;
    vector<int> arr(a,a+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i = 1;
    int k = 2;
    while(i<=k){
        sort(arr.begin(),arr.end());
        arr[0] = -arr[0];
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
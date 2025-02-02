#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,4};  // 24,12,8,6
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> nums(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    vector<int> pre(n);
    int p = nums[0];
    pre[0] = 1;
    for(int i=1;i<n;i++){
        pre[i] = p;
        p = p*nums[i];
    }
    // 1 1 2 6
    p = nums[n-1];
    for(int i=n-2;i>=0;i--){
        pre[i] = p*pre[i];
        p = p*nums[i];
    }
    // 24 12 8 6
    for(int i=0;i<n;i++){
        cout<<pre[i]<<" ";
    }
}
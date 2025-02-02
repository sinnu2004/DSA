#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,7,3,6,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> nums(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    vector<int> suf(n);
    suf[n-1] = nums[n-1];
    vector<int> pre(n);
    pre[0] = nums[0];
    for(int i=1;i<n;i++){
        pre[i] = nums[i]+pre[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<pre[i]<<" ";
    }
    cout<<endl;
    for(int i=n-2;i>=0;i--){
        suf[i] = nums[i]+suf[i+1];
    }
    for(int i=0;i<n;i++){
        cout<<suf[i]<<" ";
    }
    cout<<endl;
    for(int i=n-1;i>=0;i--){
        if(suf[i]==pre[i]){
            cout<<i;
            break;
        }
    }
}
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> nums(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    if(n==1) return 1;
    int count = 1;
    for(int i=0;i<n-1;i++){  // 1 1 1 2 2 3
        if(i+2)
        if(nums[i]==nums[i+1] && nums[i+1]==nums[i+2]){
            continue;
        }
        else {
            nums[count] = nums[i+1];
            count++;
        }
    }
    for(int i=0;i<count;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    cout<<count<<endl;
}
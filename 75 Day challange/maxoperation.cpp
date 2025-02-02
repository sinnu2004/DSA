#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> nums(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    int k = 5;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    int i = 0;
    int j = n-1;
    int count = 0;
    while(nums[i]+nums[j]>k){
        j--;
    }
    cout<<j<<endl;
    while(i<j){
        if(nums[i]+nums[j]==k){
            count++;
            nums[i] = -1;
            nums[j] = -1;
            i++;
            j--;
        }
        cout<<i<<" ";
        if(nums[i]+nums[j]>k) j--;
        else if(nums[i]+nums[j]<k) i++;
    }
    cout<<endl;
    cout<<count<<" ";
}
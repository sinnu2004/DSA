#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int helper(vector<int>& nums,int i,vector<int>& dp){
    if(i<0) return 0;
    if(i==1) return nums[i];
    int pick = nums[i] + helper(nums,i-2,dp);
    int notPick = helper(nums,i-1,dp);
    return dp[i] = max(pick,notPick);
}
int main(){
    int arr[] {1,2,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> nums(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    vector<int> dp(n+1,-1);
    cout<<helper(nums,n-1,dp);
}
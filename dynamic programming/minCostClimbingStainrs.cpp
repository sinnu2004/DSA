#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int helper(vector<int>& cost,int i,vector<int>& dp){
    if(i==0 || i==1) return cost[i];
    if(dp[i]!=-1) return dp[i];
    return dp[i] = cost[i]+min(helper(cost,i-1,dp),helper(cost,i-2,dp));
}
int main(){
    int arr[] = {1,100,1,1,1,100,1,1,100,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> cost(arr,arr+n);
    vector<int> dp(n,-1);
    cout<<min(helper(cost,n-1,dp),helper(cost,n-2,dp));
}
#include<iostream>
#include<vector>
using namespace std;
int fibo(int n,vector<int>& dp){
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];
    dp[n] = fibo(n-1,dp)+fibo(n-2,dp)+fibo(n-3,dp);
    return dp[n];
}
int main(){
    int n = 10;
    vector<int> dp(n+1,-1);   // memoizatoin
    cout<<fibo(n,dp);
}
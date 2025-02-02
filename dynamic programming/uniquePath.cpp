#include<iostream>
#include<vector>
using namespace std;
int helper(int sr,int sc,int er,int ec,vector<vector<int>>& dp){
    if(sr==er && sc==ec) return 1;
    if(sr>er || sc>ec) return 0;
    if(dp[sr][sc]!=-1) return dp[sr][sc];
    return dp[sr][sc] = helper(sr,sc+1,er,ec,dp) + helper(sr+1,sc,er,ec,dp);
}
// tabulation method
int tabulation(vector<vector<int>>& dp,int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 || j==0) dp[i][j] = 1;
            else {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
    }
    return dp[n-1][m-1];
}
int main(){
    int m = 3;
    int n = 7;
    vector<vector<int>> dp(m,vector<int> (n,-1));
    cout<<helper(0,0,m-1,n-1,dp)<<endl;
    cout<<tabulation(dp,m,n);
}
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,100,1,1,1,100,1,1,100,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> cost(arr,arr+n);
    vector<int> dp(n,-1);
    for(int i=2;i<n;i++){
        cost[i] += min(cost[i-1],cost[i-2]);
    }
    cout<<min(cost[n-1],cost[n-2]);
}
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void fillsieve(vector<bool>& sieve){
    int n = sieve.size()-1;
    for(int i=2;i<=sqrt(n);i++){
        for(int j=2*i;j<=n;j+=i){
            sieve[j] = 0;
        }
    }
}
int main(){
    int arr[] = {2,4,8,16};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> nums(arr,arr+n);
    int mx = nums[0];
    for(int i=0;i<n;i++){
        if(nums[i]>mx){
            mx = nums[i];
        }
    }
    vector<bool> sieve(mx+1,1);
    sieve[0] = 0;
    sieve[1] = 0;
    fillsieve(sieve);
    vector<int> prime;
    for(int i=2;i<=mx;i++){
        if(sieve[i]==1) prime.push_back(i);
    }
    vector<int> taken(prime.size(),0);
    for(int i=0;i<nums.size();i++){
        int ele = nums[i];
        for(int j=0;j<prime.size();j++){
            if(prime[j]>ele) break;
            if(ele%prime[j]==0) taken[j] = 1;
        }
    }
    int count = 0;
    for(int i=0;i<taken.size();i++){
       if(taken[i]==1) count++;
    }
}
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"n :";
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int lo = 0;
    int hi = n-1;
    int target;
    cout<<"target :";
    cin>>target;
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(nums[mid]==target) cout<<mid;
        else if(nums[mid]>target) hi = mid - 1;
        else if(nums[mid]<target) lo = mid + 1;
    }

}
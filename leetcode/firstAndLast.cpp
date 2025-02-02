#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"n :";
    cin>>n;
    vector<int> nums(n);
    cout<<"enter the elements of nums :";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> range(2);
    int target;
    cout<<"target :";
    cin>>target;
    range[0] = -1;
    range[1] = -1;
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(nums[mid]==target){
            if(mid==0){
                range[0] = mid;
                break;
            }
            else if(nums[mid-1]!=target){
                range[0] = mid;
                break;
            }
            else hi = mid - 1;
        }
        else if(nums[mid]<target) lo = mid + 1;
        else if(nums[mid]>target) hi = mid - 1;
    }
    lo = 0;
    hi = n-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(nums[mid]==target){
            if(mid==n-1){
                range[1] = mid;
                break;
            }
            else if(nums[mid+1]!=target){
                range[1] = mid;
                break;
            }
            else lo = mid + 1;
        }
        else if(nums[mid]<target) lo = mid + 1;
        else if(nums[mid]>target) hi = mid - 1;
    }
    cout<<"the indices of first and last occurance is :";
    for(int i=0;i<2;i++){
        cout<<range[i]<<" ";
    }
}
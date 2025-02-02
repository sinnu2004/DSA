#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> nums(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    if(n==1) return 1;
    int count = 1;
    for(int i=0;i<n-1;i++){
        if(nums[i]==nums[i+1]) continue;
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

// remove duplicate 2;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        if(n>2){
            for(int i=0;i<n-1;i++){  // 1 1 1 2 2 3
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
        }
        else count = n;
        return count;
    }
};
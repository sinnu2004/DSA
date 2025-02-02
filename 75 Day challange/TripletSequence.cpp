#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {20,100,10,12,5,13};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> nums(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-2;i++){
        int j = i+1;
        int k = i+2;
        while(k<n){
            if(nums[i]<nums[j] && nums[j]<nums[k]){
                cout<<"yes";
                cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<" ";
                cout<<endl;
            }
            j++;
            k++;
        }
    }
    cout<<endl;
    cout<<"NOt";
}
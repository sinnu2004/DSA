#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"n :";
    cin>>n;
    vector<int> nums(n);
    int val = 3;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int k = 0;
    for(int i=0;i<n;i++){
        if(nums[i]==val){
            nums[i] = 0;
        }
        else k++;
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

}
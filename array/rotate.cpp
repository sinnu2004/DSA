#include<iostream>
#include<vector>
using namespace std;
void reverseNum(int i,int j,vector<int> &ans){
    while(i<j){
        swap(ans[i],ans[j]);
        i++;
        j--;
    }
}
void display(vector<int>& ans,int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {2,4,6,8,10,12,14,16,18,20};  // 8 10 12 14 16 18 20 2 4 6
    int d = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    reverseNum(0,n-1,ans);
    display(ans,n);
    reverseNum(n-d,n-1,ans);
    display(ans,n);
    reverseNum(0,n-d-1,ans);
    display(ans,n);   
}
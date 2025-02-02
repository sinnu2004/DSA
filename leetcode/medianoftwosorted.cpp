#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,5,6,7};
    int brr[] = {2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(brr)/sizeof(brr[0]);
    vector<int> a(arr,arr+n);
    vector<int> b(brr,brr+m);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int j=0;j<m;j++){
        cout<<b[j]<<" ";
    }
    cout<<endl;
    
}
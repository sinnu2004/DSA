#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {39,6,85,38,22,89,57,93,58,69,65,80,24,27,37,26,88,2,7,5,74,45,56,55,25,33,78,49,79,64,73,98,72,87,66,75,4,21,47};
    int brr[] = {2,4,5,6,7,21,22,24,25,26,27,33,37,38,39,45,47,49,55,56,57,58,64,65,66,69,72,73,74,74,75,78,79,80,80,85,87,88,89,93,98};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(brr)/sizeof(brr[0]);
    vector<int> a(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    vector<int> b(brr,brr+m);
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    sort(b.begin(),b.end());




}
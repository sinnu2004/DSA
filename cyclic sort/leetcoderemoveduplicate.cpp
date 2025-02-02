#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,1,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    vector<int> a(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    int i=0;
    while(i<n){
        int correctIdx = a[i]-1;
        if(i==correctIdx) i++;
        else swap(a[i],a[correctIdx]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

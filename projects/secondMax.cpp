#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int fm = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>fm){
            fm = arr[i];
        }
    }
    cout<<fm<<" ";
    cout<<endl;
    int sm = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>sm && arr[i]!=fm){
            sm = arr[i];
            cout<<sm<<" ";
        }
    }
    cout<<endl;
    cout<<sm<<" ";
}
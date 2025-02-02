#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[] = {3,5,0,0,4}; // 3 5 0 0 4
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]==0 && arr[j]>0){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
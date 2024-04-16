#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,5,2,6,4,8,9,1};
    int n = 8;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
           if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
           }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
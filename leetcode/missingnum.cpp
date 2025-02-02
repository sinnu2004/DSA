// find missing element using cyclic sort 

#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    while(i<n){
        int correctIdx = arr[i];
        if(i==correctIdx || arr[i]==n) i++;
        else swap(arr[i],arr[correctIdx]);
    }
    int missing = -1;
    for(int i=0;i<n;i++){
        if(arr[i]!=i) missing = i;
    }
    return n;
    cout<<missing<<endl;
}
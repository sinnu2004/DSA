#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"n :";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int j = i+1;
        if(arr[i]>arr[j]){
            int swap = arr[i];
            arr[i] = arr[j];
            arr[j] = swap;
        }
    }
    for(int i=0;i<n;i++){
        int j = i+1;
        cout<<arr[i]<<" "<<arr[j]<<" ";
    }
}
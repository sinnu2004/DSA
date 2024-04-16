#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag = true;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            flag = false;
        }
    }
    if(flag==true) cout<<"array is sort";
    else cout<<"array is not sort";
}
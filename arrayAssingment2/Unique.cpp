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
    for(int i=0;i<n;i++){
        bool flag = true;
        for(int j=0;j<n;j++){
            if(j==i){
                continue;
            }
            if(arr[i]==arr[j]){
                flag = false;
                break;
            }
        }
        if(flag==true){
            cout<<arr[i]<<" "<<"unique";
            break;
        }
    }
}
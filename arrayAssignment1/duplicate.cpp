#include<iostream> 
using namespace std;
int main(){
    int n;
    cout<<"n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   bool flag = false;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag = true;
            }
        }
    }
    if(flag==true) cout<<"duplicate";
    else cout<<"not duplicate";
}
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,6,5};
    int n = 6;
    bool flag=true;
    for(int i=0;i<n-2;i++){
        if(arr[i]>arr[i+1]){
            flag = false;
        }
    }
    if(flag==true) cout<<"almost sorted";
    else cout<<"not sorted ";
}
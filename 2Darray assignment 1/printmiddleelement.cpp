#include<iostream>
using namespace std;
int array2(int m , int brr[][]){
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==j){
                cout<<brr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
int main(){
    int n = 5;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    array2(5,arr);
}
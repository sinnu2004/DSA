#include<iostream> 
using namespace std;
int main(){
    int n = 3;
    int max = n-1;
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
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout<<arr[i][j]<<" ";
            }
            else if(i==0 && j==max){
                cout<<arr[i][j]<<" ";
            }
            else if(i==max && j==0){
                cout<<arr[i][j]<<" ";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}
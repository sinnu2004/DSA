#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n = 4;
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
    int max =  INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }
    cout<<"the maximum element is :"<<max<<endl;
    
}
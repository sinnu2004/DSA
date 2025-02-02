#include<iostream>
using namespace std;
int main(){
    int n = 3;
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
    int cmax = n-1;
    int cmin = 0;
    int rmax = n-1;
    int rmin = 0;
    while(rmin<=rmax && cmin<=cmax){
        // upward
        for(int i=rmax;i>=rmin;i--){
            cout<<arr[i][cmin]<<" ";
        }
        cmin++;
        // right side
        for(int j=cmin;j<=cmax;j++){
            cout<<arr[rmin][j]<<" ";
        }
        rmin++;
        // downward
        for(int i=rmin;i<=rmax;i++){
            cout<<arr[i][cmax]<<" ";
        }
        cmax--;
        // left side
        for(int j=cmax;j>=cmin;j--){
            cout<<arr[rmax][j]<<" ";
        }
        rmax--;
    }
}
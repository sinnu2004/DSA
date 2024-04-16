#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the no of rows :";
    cin>>m;
    cout<<"enter the no of columns :";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    int t[n][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            t[i][j] = arr[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    /*for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/
}
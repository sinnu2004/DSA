#include<iostream>
using namespace std;
int main(){
    int n = 3;
    int a[n][n];
    int b[n][n];
    cout<<"enter the elements of first matrix :";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter the elements of second matrix :";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}
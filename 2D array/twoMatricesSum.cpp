#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the no of row :";
    cin>>m;
    cout<<"enter the no of column :";
    cin>>n;
    int arr[m][n];
    int brr[m][n];
    int sum = 0;
    cout<<"enter the elements of first matrices :";
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"enter the elements of second matrices :";
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>brr[i][j];
        }
    }

    for (int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]+brr[i][j]<<" ";
        }
        cout<<endl;
    }
}
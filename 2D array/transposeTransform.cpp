#include<iostream>
using namespace std;
int main(){
    /*int arr[3][3];
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            if(i==j) cout<<arr[i][j]<<" ";
            else cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }*/
    int m,n;
    cout<<"enter the no of rows :";
    cin>>m;
    cout<<"enter the no of rows :";
    cin>>n;
    int arr[n][n];
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            if(i==j) cout<<arr[i][j]<<" ";
            else cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
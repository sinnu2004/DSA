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
    int product = 1;
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            product *= arr[i][j];
        }
    }
    cout<<"product is :"<<product;
}
#include<iostream>
using namespace std;
int main(){
    int n,m;  // n = number of rows and m = number of column
    cout<<"enter the number n:";
    cin>>n;
    cout<<"enter the number m:";
    cin>>m;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
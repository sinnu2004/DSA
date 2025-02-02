#include<iostream>
using namespace std;
// triangular left allign star pattern 
int main(){
    int n; // n denotes the no of rows
    cout<<"enter the no of rows :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
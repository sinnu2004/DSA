#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    for (int i=n;i<=n*10;i+=n){
        cout<<i<<endl;
    }
}
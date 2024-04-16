#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n:";
    cin>>n;
    bool flag = 0;
    if(n<=1) cout<<"not prime";
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"non prime";
            flag = 1;
            break;
        }
    }
    if(flag==0) cout<<"prime number";
}
#include<iostream>
using namespace std;
bool isPowerTwo(int n){
    if(n==1){
        return true;
    }
    if(n%2==0){
        return isPowerTwo(n/2);
    }
    return false;
}
int main(){
    int n;
    cout<<"n :";
    cin>>n;
    if(isPowerTwo(n)==true){
        cout<<"yes";
    }
    else cout<<"no";
}
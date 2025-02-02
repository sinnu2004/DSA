#include<iostream>
using namespace std;
int pow(int x,int n){
    if(n==1) return x;
    int ans = pow(x,n/2);
    if(n%2==0){
        return ans*ans;
    }
    if(n%2!=0){
        return ans*ans*x;
    }
}
int main(){
    int x,n;
    cout<<"enter the base :";
    cin>>x;
    cout<<"enter the exponents :";
    cin>>n;
    cout<<pow(x,n);
}
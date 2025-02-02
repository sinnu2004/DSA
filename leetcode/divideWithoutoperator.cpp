#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int power(long long n,long long x){
    if(x==0) return 1;
    return n*power(n,x-1);
}
int main(){
    long long int powp = 1;
    long long int n,x;
    cout<<"enter the base :";
    cin>>n;
    cout<<"enter the power :";
    cin>>x;
    cout<<"the powr of n raise to x is :"<<pow(n,x)<<endl;
    for(int i=0;i<x;i++){
        powp = powp*n;
    }
    cout<<"the result is :"<<powp<<endl;
    cout<<"the recusive result is :"<<power(n,x)<<endl;
}
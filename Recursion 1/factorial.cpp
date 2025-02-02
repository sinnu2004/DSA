#include<iostream>
using namespace std;
int factorial(int x){
    // base case
    if(x==1 || x==0) return 1;
    return x*factorial(x-1);
}
int main(){
    int n;
    cout<<"n :";
    cin>>n;
    if(n<0) cout<<"factorial does not exist";
    else cout<<factorial(n);
}
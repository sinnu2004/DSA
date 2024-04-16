#include<iostream>
using namespace std;

// finding gcd of two number 
// forward loop 
 int gcd (int a, int b){
    int hcf = 1;
    for (int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            hcf = i;
        }
    }
    return hcf;
}
// backward loop 
int gcd2 (int a, int b){
    int hcf = 1;
    for (int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            hcf = i;
            break;
        }
    }
}
int main (){
    int a;
    cout<<"enter the first number :";
    cin>>a;
    int b;
    cout<<"enter the second number:";
    cin>>b;

    cout<<gcd(a,b)<<endl;
    cout<<gcd2(a,b)<<endl;
}


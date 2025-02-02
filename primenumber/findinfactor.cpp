#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n = 60;
    for(int i=1;i*i<n;i++){
        if(n%i==0) {
            cout<<i<<" ";
        }
    }
    for(int i=sqrt(n);i>=1;i--){
        if(n%i==0) {
            cout<<n/i<<" ";
        }
    }
}

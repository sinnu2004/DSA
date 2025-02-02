#include<iostream>
using namespace std;
int tribonacci(int n){
    if(n==0) return 1;
    if(n==1) return 1;
    if(n==2) return 2;
    return tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
}
int main(){
    int n = 4;
    cout<<tribonacci(n);
    cout<<endl;
    int sum = 0;
    if(n<3){
        for(int i=0;i<n;i++){
            sum = sum + i;
        }
    }
    cout<<sum<<endl;
    int trisum = 0;
    for(int i=3;i<n+3;i++){
        trisum = trisum + 3*i-6;
        cout<<trisum<<" ";
    }
    cout<<trisum<<endl;
}
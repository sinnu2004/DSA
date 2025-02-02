#include<iostream>
using namespace std;
int numWay(int n){
    if(n==2) return 2;
    if(n==1) return 1;
    return numWay(n-1) + numWay(n-2);
}
int main(){
    int n;
    cout<<"enter the no of stairs :";
    cin>>n;
    cout<<numWay(n);
}
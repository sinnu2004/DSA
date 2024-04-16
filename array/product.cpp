#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n:";
    cin>>n;
    int arr[n];
    int product = 1;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
        product*=arr[i];
    }
    cout<<product;

}
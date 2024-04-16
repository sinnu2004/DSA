#include<iostream>
#include<climits>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i=2;i<=x;i++){
        f *= i;
    }
    return f;
}
int main(){
    int n;
    cout<<"n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max= INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]) max = arr[i];
    }
    cout<<fact(max);
}
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min = INT_MAX;
    int smin = INT_MAX;
    for(int i=0;i<n;i++){
        if(min>arr[i]) min = arr[i];
    }
    for(int i=0;i<n;i++){
        if(smin>arr[i] && arr[i]!=min){
            smin = arr[i];
        }
    }
    cout<<min<<" "<<smin;
}
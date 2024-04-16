#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"n :";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    int count = 0;
    cout<<"enter the element ";
    cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i]>x){
        count++;
        }
    }
    cout<<count;
}
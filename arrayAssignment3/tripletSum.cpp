#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter the element you want";
    cin>>x;
    int count = 0;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=i+2;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" ";
                    count++;
                }
            }
        }
    }
    cout<<endl;
    cout<<count;
}
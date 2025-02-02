#include<iostream> 
using namespace std;
int main(){
    int n = 5;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int count = 0;
    bool flag = true;
    for(int i=0;i<n;i++){
        flag = true;
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        count++;
        if(flag==true){
            break;
        }
    }
    cout<<"the no of swap is:"<<count<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
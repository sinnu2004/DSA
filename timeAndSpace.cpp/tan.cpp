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
    int pivot = -1;
    bool flag = false;
    int x;
    cout<<"x :";
    cin>>x;
    if(n==1){
        cout<<x;
        flag = true;
    }
    if(n==2){
        if(arr[0]==x) cout<<x<<"1"<<" ";
        if(arr[1]==x) cout<<x<<"2"<<" ";
        flag = true;
    }
    if(flag==false){
        int lo = 0;
        int hi = n-1;
        int mid = lo + (hi-lo)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            pivot = mid + 1;
        }
        if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1]){
            pivot = mid;
        }
        lo = 0;
        hi = pivot - 1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid]==x){
                cout<<mid<<"3"<<" ";
                flag = true;
                break;
            }
            if(arr[mid]>x) hi = mid - 1;
            if(arr[mid]<x) lo = mid + 1;
        }
        lo = pivot;
        hi = n-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid]==x) {
                cout<<mid<<"4"<<" ";
                flag = true;
                break;
            }
            if(arr[mid]<x) lo = mid + 1;
            if(arr[mid]>x) hi = mid - 1;
        }
    }
    if(pivot==-1 && flag==false){
        int lo = 0;
        int hi = n-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid]==x){
                cout<<mid<<"5"<<" ";
                flag = true;
                break;
            }
            if(arr[mid]<x) lo = mid + 1;
            if(arr[mid]>x) hi = mid - 1;
        }
    }
}
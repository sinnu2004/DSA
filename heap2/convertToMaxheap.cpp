#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void print(vector<int>& arr,int n){
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void heapify(int i,vector<int>& arr,int n){
    while(true){
        int left = 2*i,right = 2*i + 1;
        if(left>=n) break;
        if(right>=n){
            if(arr[i]<arr[left]){
                swap(arr[i],arr[left]);
                i = left;
            }
            break;
        }
        if(arr[left]>arr[right]){
            if(arr[i]<arr[left]){
                swap(arr[i],arr[left]);
                i=left;
            }
            else break;
        }
        else {
            if(arr[i]<arr[right]){
                swap(arr[i],arr[right]);
                i=right;
            }
            else break;
        }
    }
}
int main(){
    int a[] = {10,2,14,11,1,4};
    int n = sizeof(a)/sizeof(a[0]);
    vector<int> arr(n+1,0);
    int s = arr.size();
    for(int i=1;i<=s;i++){
        arr[i] = a[i-1];
    }
    print(arr,s);
    for(int i=s/2;i>=1;i--){
        heapify(i,arr,s);
    }
    print(arr,s);
}
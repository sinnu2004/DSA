#include<iostream>
#include<vector>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivotelement = arr[si];
    int count = 0;
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<=pivotelement) count++;
    }
    int pivotIdx = count + si;
    swap(arr[si],arr[pivotIdx]);
    int i = si;
    int j = ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotelement) i++;
        if(arr[j]>pivotelement) j--;
        else if(arr[i]>pivotelement && arr[j]<=pivotelement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
void kthsmall(int arr[], int si, int ei,int k){
    int pi = partition(arr,si,ei,k);  // pi = pivotindex
    // recusive approach 
    kthsmall(arr,si,pi-1,k);
    kthsmall(arr,pi+1,ei,k);
}
int main(){
    int arr[] = {5,1,8,2,7,6,3,4};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<kthsmall(arr,0,n-1,k);
}
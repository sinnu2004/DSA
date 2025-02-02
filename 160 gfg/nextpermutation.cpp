#include<iostream>
#include<vector>
using namespace std;
void reversenum(int i,int j,vector<int>& arr){
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
display(vector<int>& arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[] = {1,4,3,2};   // 1 4 3 2
    int n = sizeof(a)/sizeof(a[0]);  // 2 1 3 4 exp
    vector<int> arr(a,a+n);         //  1 2 3 4 5 6  my 

    display(arr,n);
    int pivot = 0;
    for(int i=n-1;i>=1;i--){
        if(arr[i-1]>arr[i]){
            pivot = i;
            break;
        }
    }
    cout<<pivot<<endl;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>arr[pivot]){
            swap(arr[i],arr[pivot]);
            break;
        }
    }
    display(arr,n);
    reversenum(pivot+1,n-1,arr);  // 2, 4, 5, 0, 1, 7
    display(arr,n);
}
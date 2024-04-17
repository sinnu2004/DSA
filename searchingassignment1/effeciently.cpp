#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {0,0,0,0,1,1};
    int n = 6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int count = 0;
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==1){
            if(arr[mid-1]!=1){
                count = mid;
                break;
            }
            else {
                hi = mid - 1;
            }
        }
        else if(arr[mid]>1){
                hi = mid - 1;
        }
        else{
            lo = mid + 1;
        }
    }
    int ans = n - count;
    cout<<ans;
}
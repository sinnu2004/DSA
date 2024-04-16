#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {0,1,2,3,4,5,7,9,10,11,13,14,16};
    int n = 12;
    int lo = 0;
    int hi = n-1;
    int ans = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==mid){
            lo = mid+1;
        }
        else {
            ans = mid;
            hi = mid - 1;
        }
    }
    cout<<ans;
}
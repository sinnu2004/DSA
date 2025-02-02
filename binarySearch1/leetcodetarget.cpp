#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,3,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int target = 7;
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(v[mid]==target){
            cout<<mid;
            flag = true;
            break;
        }
        else if(v[mid]>target) hi = mid-1;
        else lo = mid+1;
    }
    if(flag==false) cout<<hi+1;
}
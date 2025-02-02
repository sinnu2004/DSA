#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[] = {-5,1,5,0,-7};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> gains(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<gains[i]<<" ";
    }
    cout<<endl;
    vector<int> ans(n+1);
    ans[0] = 0;
    for(int i=1;i<n+1;i++){
        ans[i] = ans[i-1] + gains[i-1];
    }
    for(int i=0;i<n+1;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    int mx = INT_MIN;
    for(int i=0;i<n+1;i++){
        if(ans[i]>mx) mx = ans[i];
    }
    cout<<mx<<endl;
}
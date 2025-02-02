#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[] = {2,1,3,4};
    int b[] = {1,2,3,4};
    int n = sizeof(a)/4;
    int m = sizeof(b)/4;
    vector<int> arr(a,a+n);
    vector<int> brr(b,b+m);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<m;i++){
    //     cout<<brr[i]<<" ";
    // }
    // cout<<endl;
    int k = 2;
    for(int i=0;i<=n-k;i++){
        int sum = 0;
        for(int j=i;j<i+k;j++){
            cout<<arr[j]<<" ";
            sum += arr[j];
        }
        cout<<endl;
    }
}
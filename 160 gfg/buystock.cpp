#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[] = {100, 180, 260, 310, 40, 535, 695};   // 100 180 260 310 40 535 695
    int n = sizeof(a)/sizeof(a[0]);
    vector<int> arr(a,a+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i = 0;
    int ans = 0;
    int buy = 0;
    int sell = 0;
    while(i<n-1){
        if(arr[i]<arr[i+1] && buy==0){
            buy = arr[i];
        }
        if(arr[i]>arr[i+1] && buy!=0){
            sell = arr[i];
            ans = ans + sell - buy;
            cout<<"ans :"<<ans<<endl;
            buy = 0;
        }
        i++;
    }
    if(buy!=0) ans = ans + arr[n-1] - buy;
    cout<<endl;
    cout<<"ans :"<<ans;  //865-1560
}
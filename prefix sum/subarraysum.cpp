#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {1,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    cout<<sum<<endl;
    int presum = 0;
    for(int i=0;i<3;i++){
        sum += arr[i];
        presum += arr[i];
    }
    cout<<sum<<endl;
    cout<<presum<<endl;
    int i=1;
    int j = 3;
    while(j<n){
        sum += arr[j]-arr[i-1];
        cout<<sum<<" ";
        int csum = presum + arr[j] - arr[i-1];
        i++;
        j++;
        presum = sum;
    }
    int ans = presum + sum;
    cout<<sum<<" "<<endl;
    cout<<presum<<endl;
    cout<<ans<<endl;
}
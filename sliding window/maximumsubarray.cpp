#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,12,-5,-6,50,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    int maxsum = INT_MIN;
    int presum = 0;
    int maxIdx = 0;
    for(int i=0;i<k;i++){
        presum += arr[i];
        //cout<<presum<<" ";
    }
    cout<<endl;
    //cout<<presum<<endl;
    maxsum = presum;
    int i = 1  ;
    int j = k;
    while(j<n){
        int currentsum = presum + arr[j]-arr[i-1];
        if(maxsum<currentsum){
            cout<<i<<" "<<j<<endl;
            maxsum = currentsum;
            maxIdx = i;
        }
        i++;
        j++;
        presum = currentsum;
    }
    // cout<<maxsum<<endl;
    // cout<<maxsum/k<<endl;
}
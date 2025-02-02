#include<iostream>
#include<queue>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>> pq;
    int a[] = {1,3,3,2};
    int b[] = {2,1,3,4};
    int n = sizeof(a)/4;
    int m = sizeof(b)/4;
    vector<int> arr(a,a+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k = 3;
    int presum = 0;
    for(int i=0;i<k;i++){
        presum += arr[i];
    }
    cout<<presum<<endl;
    for(int i=0;i<k;i++){
        pq.push(b[i]);
    }
    int maxsum = (presum)*(pq.top());
    int i = 1;
    int j = k;
    while(j<n){
        int currentsum = (presum + arr[j] - arr[i-1])*pq.top();
        cout<<currentsum<<endl;
        if(maxsum<currentsum){
            maxsum = currentsum;
        }
        pq.pop();
        i++;
        j++;
        pq.push(b[j]);
    }
    cout<<maxsum<<" ";
}

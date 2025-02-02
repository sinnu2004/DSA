#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
    int a[] = {3,2,1,5,6,4};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 2;
    vector<int> arr(a,a+n);
    priority_queue<int, vector<int> ,greater<int>> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<pq.top();
}
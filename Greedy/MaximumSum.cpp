#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int a[] = {2,-3,-1,5,-4};
    int n = sizeof(a)/4;
    vector<int> arr(a,a+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    priority_queue<int,vector<int>, greater<int>> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    int k = 2;
    int i = 1;
    while(i<=k){
        int x = pq.top();
        x = -x;
        pq.pop();
        pq.push(x);
        i++;
    }
    int sum = 0;
    while(pq.size()>0){
        cout<<pq.top()<<" ";
        sum += pq.top();
        pq.pop();
    }
    cout<<endl;
    cout<<sum;
}
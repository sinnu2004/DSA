#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int arr[] = {10,1,2,20,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    priority_queue<int, vector<int> ,greater<int>> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i = 0;
    while(i<n){
        arr[i] = pq.top();
        pq.pop();
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
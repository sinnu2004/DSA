#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(5);
    pq.pop();
    pq.push(6);
    cout<<pq.size()<<endl;
    cout<<pq.top()<<endl;
    vector<int> arr(pq.size());
    for(int i=arr.size()-1;i>=0;i--){
        int x = pq.top();
        arr[i] = x;
        pq.pop();
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
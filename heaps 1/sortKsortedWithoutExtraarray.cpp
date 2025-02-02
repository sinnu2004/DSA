#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
    int a[] = {6,5,3,2,8,10,9};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 3;
    vector<int> arr(a,a+n);
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int j = 0;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            arr[j] = pq.top();
            pq.pop();
            j++;
        }
    }
    while(pq.size()>0){
        arr[j] = pq.top();
        j++;
        pq.pop();
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
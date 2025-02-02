#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5};
    int k = 4;
    int x = 3;
    int n = sizeof(a)/sizeof(a[0]);
    vector<int> arr(a,a+n);
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        int ele = abs(arr[i]-x);
        pq.push(ele);
        if(pq.size()>k) pq.pop();
    }
    while(pq.size()>0){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
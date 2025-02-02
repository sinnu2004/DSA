#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int a[] = {10,20,-4,6,18,24,105,118};
    int k = 4;
    int n = sizeof(a)/sizeof(a[0]);
    vector<int> arr(a,a+n);
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<pq.top()<<endl;

}
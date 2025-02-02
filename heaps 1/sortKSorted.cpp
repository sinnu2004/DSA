#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int a[] = {6,5,3,2,8,10,9};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 3;
    vector<int> arr(a,a+n);
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> ans;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    while(pq.size()>0){
        ans.push_back(pq.top());
        pq.pop();
    }
    // sort(arr.begin(),arr.end());
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
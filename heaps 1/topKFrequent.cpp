#include<iostream>
#include<queue>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
typedef pair<int,int> pi;
int main(){
    int a[] = {3,0,1,0};
    int k = 1;
    int n = sizeof(a)/sizeof(a[0]);
    vector<int> arr(a,a+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    map<int,int> m;
    pair<int,int> p;
    for(int ele : arr){
        m[ele]++;
    }
    priority_queue<pair,vector<pair>,greater<pair>> pq;
}
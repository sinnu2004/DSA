#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    int a[] = {5,10,-5};
    int n = sizeof(a)/4;
    vector<int> arr(a,a+n);
    stack<int> p;
    stack<int> v;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>0) p.push(arr[i]);
        else {
            v.push(-arr[i]);
        }
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int> ans;
    while(p.size()>0){
        if(p.top()>v.top()) v.pop();
        else if(v.top()>p.top()) p.pop();
        else if(p.top()==v.top()) {
            v.pop();
            p.pop();
        }
        else {
            ans.push_back(p.top());
            ans.push_back(v.top());
        }
        p.pop();
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
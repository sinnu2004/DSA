#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {3,5,0,0,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(arr[i]>0) ans.push_back(arr[i]);
    }
    cout<<ans.size()<<endl;
    for(int i=ans.size();i<n;i++){
        ans.push_back(0);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
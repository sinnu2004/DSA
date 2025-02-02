#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n = 8;
    vector<int> pre(n);
    vector<int> suf(n);
    pre[0] = 1;
    for(int i=1;i<n;i++){
        pre[i] = i + pre[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<pre[i]<<" ";
    }
    cout<<endl;
    suf[n-1]= n;
    for(int i=n-2;i>=0;i--){
        if(pre[i]==suf[i]) cout<<i;
        suf[i] = i + suf[i+1];
    }
    for(int i=n-1;i>=0;i--){
        cout<<suf[i]<<" ";
    }
    cout<<endl;
    cout<<-1;
}
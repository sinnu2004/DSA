#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversepart(int i,int j,vector<int>& a){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    return;
}
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(3);
    v.push_back(0);
    v.push_back(5);
    v.push_back(6);
    v.push_back(4);
    display(v);
    int n = v.size();
    int k=3;
    if(k>n) k = k%n;
    reversepart(0,n-k-1,v);
    reversepart(n-k,n-1,v);
    reversepart(0,n-1,v);
    display(v);
}
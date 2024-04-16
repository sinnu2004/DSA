#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"n";
    cin>>n;
    int pro = 1;
    cout<<"enter vector :";
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        pro = pro*v[i];
    }
    cout<<pro<<endl;
    cout<<"enter array :";
    int arr[] = {2,5,6,6,};
    int product = 1;
    for(int i=0;i<4;i++){
        product = product*arr[i];
    }
    cout<<product;
}
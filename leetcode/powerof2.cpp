#include<iostream>
using namespace std;
bool pow(int n){
    bool flag;
    if(n==1) flag = true;
    if(n%2!=0)  flag = false;
    return 2*pow(n/2);
}
int main(){
    int n;
    cout<<"enter the elements :";
    cin>>n;
    bool flag = false;
    if(n>1 && n%2!=0) flag = false;
    2*pow(n/2);
    cout<<flag<<endl;
}
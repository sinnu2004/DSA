#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n:";
    cin>>n;
    char str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    for(int i=0;i<n;i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<n;i+=2){
        str[i] = 'a';
    }
    for(int i=0;i<n;i++){
        cout<<str[i]<<" ";
    }
}
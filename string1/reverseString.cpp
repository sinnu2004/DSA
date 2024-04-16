#include<iostream>
#include<string>
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
    /*for(int i=0;i<n;i++){
        if(i<n/2-1){
            for(int j=n/2-1;j>=0;j--){
                cout<<str[j]<<" ";
            }
        }
        else cout<<str[i]<<" ";
    }*/
}
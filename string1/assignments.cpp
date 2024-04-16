#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string :";
    getline(cin,str);
    int n = str.length();
    for(int i=0;i<n;i++){
        if(i%2!=0){
            str[i] = '#';
        }
    }
    for(int i=0;i<n;i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    cout<<str.length();
}
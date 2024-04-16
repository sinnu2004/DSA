#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string";
    getline(cin,str);
    int n;
    n = str.length();
    cout<<str.substr(n/2);
}
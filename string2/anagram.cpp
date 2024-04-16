#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    bool flag = false;
    string s;
    cout<<"enter the first string";
    getline(cin,s);
    string t;
    cout<<"enter the second string";
    getline(cin,t);
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        flag = true;
    }
    else flag = false;
    cout<<flag;
}
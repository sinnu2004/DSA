#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "abcdcba";
   // cout<<"enter the string :";
   // getline(cin,str);
   // int n = str.length();
    string dup ;
    getline(cin,dup);
    if(str==dup){
        cout<<"palindrome";
    }
    else cout<<"not palindrome";

}
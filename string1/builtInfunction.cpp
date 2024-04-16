#include<iostream>
#include<string>
using namespace std;
int main(){
    // finding length
    /*string str = "saurabh";
    cout<<str.length();*/

    // adding new strings 
    string str = "abcd";
    cout<<str<<endl;
    str.push_back('e');
    str.push_back('f');
    cout<<str<<" ";
    cout<<endl;
    // "+ " operator
    string s = "abc";
    string t = "def";
    cout<<s<<endl;
    s = s + t;
    cout<<s<<endl;
    s = "x" + t;
    cout<<s<<endl;

    // reverse 
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    
}
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character :";
    cin>>ch;
    int ascii = (int)ch;
    if((ascii>=65) && (ascii<=90)){
        cout<<"character "<<ch<<" "<<"is upper case";
    }
    if((ascii>=97) && (ascii<=122)){
        cout<<"character "<<ch<<" "<<"is lower case";
    }
    else cout<<"character is not alphabet";

    // print the uppercase alphabet with their ascii value 

    for (int i=65;i<=90;i++){
        cout<<i<<" "<<(char)i;
    }

    // print the lowercase alphabet with their ascii value 
    for (int i=97;i<=122;i++){
        cout<<i<<" "<<(char)i;
    }
}


#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character: ";
    cin>>ch;
    int ascii = (int)ch;
    if((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122)){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            cout<<"character"<<" "<<ch<<" is vowel"<<" "<<endl;
        }
        else if cout<<"character"<<" "<<ch<<" is consonant"<<" "<<endl;
    }
}
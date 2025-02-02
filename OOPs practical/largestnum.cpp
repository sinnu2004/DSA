#include<iostream>
using namespace std;
void largest(int a,int b,int c){
    if(a>b && a>c){
        cout<<a<<" is greater than "<<b<<" and "<<c;
    }
    if(b>a && b>c){
        cout<<b<<" is greater than "<<a<<" and "<<c;
    }
    else cout<<c<<" is greater than "<<a<<" and "<<b;
}
int main(){
    int a,b,c;
    cout<<"enter the first number :";
    cin>>a;
    cout<<"enter the second number :";
    cin>>b;
    cout<<"enter the third number :";
    cin>>c;
    largest(a,b,c);
}
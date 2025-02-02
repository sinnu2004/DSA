#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the first number :";
    cin>>x;
    cout<<"enter the second number :";
    cin>>y;
    int q = x/y;
    int r = x%y;
    cout<<"quatient of two is :"<<q<<endl;
    cout<<"remainder of two is :"<<r<<endl;
}
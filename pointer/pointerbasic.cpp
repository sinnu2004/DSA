#include<iostream>
using namespace std;
// syntax of pointer
//data__type* pointer_name ;
int main(){
    int x = 2;
    int* p = &x;
    cout<<&x<<endl;
    cout<<p;

// problem in sytax of pointer


    // correct 
    int y,z;
    y = 2;
    z = 5;
    int* p1 = &y;
    cout<<endl;
    int* p2 = &z;
    cout<<endl;
    
    // incorrect 
   // y = 4;
   // z = 10;
    // int* p1 = &y, p2 = &z;


// sum of two number using pointer

   
    cout<<"enter the first number:";
    cin>>*p1;
    cout<<"enter the second number:";
    cin>>*p2;
    cout<<*p1 + *p2;
    cout<<endl;
    cout<<y + z;
    cout<<endl;
}


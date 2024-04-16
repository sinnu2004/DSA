#include<iostream>
using namespace std;

// display the series of ap upto n term 

int main(){                         // nth term = 2n-1
    int n;
    cout<<"enter the number:";
    cin>>n;
    for (int i=1;i<=(2*n-1);i+=2){
    cout<<i<<" ";
}
    cout<<endl;
// print odd number using loop 
    cout<<"enter number for odd number:";
    cin>>n;
    int a = 1;
    for (int i=1;i<=n;i++){
        cout<<a<<endl;
        a = a + 2;
    }
    cout<<endl;

// code for printing gp of n terms
    cout<<"enter n for gp :";
    cin>>n;
    a = 1;
    for (int i=1; i<=n;i++){
        cout<<a<<endl;
        a = a*2;
    }
    cout<<endl;

// code for reverse ap 

    cout<<"enter the n for reverse ap :";
    cin>>n;
    a = n;
    for (int i=n;a>0;i--){
        cout<<a<<endl;
      a = a - 3;  
    }
    cout<<endl;
}


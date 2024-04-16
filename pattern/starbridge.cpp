#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n:";  // n= number of rows 
    cin>>n;
    for (int i=1;i<=2*n-1;i++){  // loop of print stars in first row
        cout<<"*";
    }
    cout<<endl;
    int nsp = 1;  // nsp = number of space
    int nst = n-1; // nst = number of stars
    for (int i=1;i<=nst;i++){
        for (int j=1;j<=nst+1-i;j++){
            cout<<"*";
        }
        for (int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp+=2;
        for (int j=1;j<=nst+1-i;j++){
            cout<<"*";

        }
        cout<<endl;
    }

// star bridge pattern in number 

    cout<<"n:";  // n= number of rows 
    cin>>n;
    for (int i=1;i<=2*n-1;i++){  // loop of print stars in first row
        cout<<i;
    }
    cout<<endl;
    nsp = 1;  // update value of nsp 
    for (int i=1;i<=nst;i++){
        int a = 1;
        for (int j=1;j<=nst+1-i;j++){
            cout<<a;
            a++;
        }
        for (int k=1;k<=nsp;k++){
            cout<<" ";
            a++;
        }
            
            nsp+=2;
            for (int l=1;l<=nst+1-i;l++){
            cout<<a;
            a++;

        }
        cout<<endl;
    }
}

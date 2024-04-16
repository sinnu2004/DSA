#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n:";  // n = number of rows 
    cin>>n;
    int nsp = n-1;  // nsp = number of space
    int nst = 1; // nst = number of star
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        if(i<n-1) nsp--;
        else nsp++;

        for (int k=1;k<=nst;k++){
            cout<<"*";
        }
        if(i<n-1) nst+=2;
        else nst-=2;

        cout<<endl;
    }

}
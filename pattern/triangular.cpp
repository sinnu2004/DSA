#include<iostream>
using namespace std;
int main(){

// triangular pattern left allign

    int n;  // n = number of rows 
    cout<<"n:";
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

// triangular pattern right allign
    cout<<endl;
    cout<<"n:";
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for (int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }

// triangular pattern with mid allign

    cout<<"n:";
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for (int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}

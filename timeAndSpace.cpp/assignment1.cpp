#include<iostream>
using namespace std;
int main(){
    int c = 0;
    int n = 10;
    for(int i=n;i>1;i/=i){
        c++;
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<c;

//  O(k);

    int c = 0;
    for(int i = n; i > 0; i /= 2) {
    c++;
    }

// O(logn)

    int c = 0;
    for(int i = 0; i < n; i += k) {
    c++;
    }

//  O(n)

    int c = 0;
        for(int i = 1; i < n; i *= 2) {
    c++;
    }

// O(logn)

    int c = 0;
    for(int i = 0; i < n; i++) {
    c +=i;
    }

// O(n)

    int c = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++){
        c++;
        }
    }

// O(n^2)

}
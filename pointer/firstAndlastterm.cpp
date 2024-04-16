#include<iostream>
using namespace std;

// finding first and last digit 
 void find(int n, int* ptr1, int* ptr2){
    *ptr1 = n%10;
    while (n>9){
        n/=10;
    }
    *ptr2 = n;
}
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int last_digit, first_digit;
    int *ptr1 = &last_digit;
    int *ptr2 = &first_digit;
    find(n,ptr1,ptr2);
    cout<<first_digit<<" "<<last_digit<<endl;
}
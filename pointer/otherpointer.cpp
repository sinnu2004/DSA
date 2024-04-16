#include<iostream>
using namespace std;

// null pointer

/*int main(){
    int x;
    int *ptr = NULL;
    cout<<ptr;
}*/

// double pointer
int main(){
    int x = 5;
    int *ptr1 = &x;
    int** doublepointer = &ptr1;
    cout<<x<<endl;
    cout<<ptr1<<endl;
    cout<<doublepointer<<endl;
 }

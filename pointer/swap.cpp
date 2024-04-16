#include<iostream>
using namespace std;
// swap of number  using pass by reference
 void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return ;
}
//swap of two number by alias
 void swap2(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return;
}
int main(){
    int x,y;
    cout<<"enter the 1st number :";
    cin>>x;
    cout<<"enter the 2nd number:";
    cin>>y;
    swap (&x,&y);
    cout<<"the swap of value of 1st number:"<<x<<endl<<"the swap value of 2nd number:"<<y;
    cout<<endl;
    swap2(x,y);
    cout<<x<<" "<<y;
}


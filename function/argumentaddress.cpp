#include<iostream>
using namespace std;
// arguments address
 void fun(int x, int y ){// formal parameter 
    cout<<"the address of void x:"<<&x<<endl;
    cout<<"the address of void y:"<<&y<<endl;
}
int main(){
    int x = 3;
    int y = 1;
  
    cout<<"the address of main x:"<<&x<<endl;
    cout<<"the address of main y:"<<&y<<endl;
    fun(x,y);
    // fun(x,y // actual parameter )

}
#include<iostream>
using namespace std;
class add{
    private:
        int a;
        int b;
        int c;
        int d;
    public:
        void setdata(){
            a = 5;
            b = 6;
        }
        int add1(){
            c = a+b;
        }
        int sub1(){
            d = a-b;
        }
        void getdata(){
            cout<<"the addition of two number is :"<<c<<endl;
            cout<<"the subtraction of two number is :"<<d;
        }
};
int main(){
    add a1;
    a1.setdata();
    a1.add1();
    a1.sub1();
    a1.getdata();
}

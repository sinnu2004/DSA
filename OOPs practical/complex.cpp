#include<iostream>
using namespace std;
class complex{
    float x;
    float y;
    public:
    complex(){}
        complex(float real,float image){
            x = real;
            y = image;
        }
        complex operator+(complex);
        void display(void);
};
complex complex::operator+(complex c){
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return (temp);
}
void complex :: display(void){
    cout<<x<<"+ j"<<y<<"\n";
}
int main(){
    complex c1,c2,c3;
    c1 = complex(3.5,2.5);
    c2 = complex(1.6,1.7);
    c3 = c1 + c2;

    cout<<"c1 = ";
    c1.display();
    cout<<"c2 = ";
    c2.display();
    return 0;
}
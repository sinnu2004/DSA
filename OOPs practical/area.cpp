#include<iostream>
using namespace std;
float area(float r){
    float Arcircle = 3.14*r*r;
    cout<<"the area of circle is :"<<Arcircle;
}
float area(int l,int b){
    float Arrectangle = l*b;
    cout<<"the area of rectangle is :"<<Arrectangle;
}
float area(float tb,float th){
    float Artriangle = (tb*th)/2;
    cout<<"the area of triangle is :"<<Artriangle;
}
int main(){
    int choice;
    cout<<"1. circle \n 2.rectangle \n 3.triangle"<<endl;
    cout<<"enter choice :";
    cin>>choice;
    switch(choice){
        case 1:
        int r;
        cout<<"enter the radius of circle :";
        cin>>r;
        area(r);
        break;
        case 2:
        int l,b;
        cout<<"enter the length of rectangle :";
        cin>>l;
        cout<<"enter the breadth of rectangle :";
        cin>>b;
        area(l,b);
        break;
        case 3:
        float tb,th;
        cout<<"enter the base of triangle :";
        cin>>tb;
        cout<<"enter the height of triangle :";
        cin>>th;
        area(tb,th);
        break;
    }
}
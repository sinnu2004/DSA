#include<iostream>
#include<cstring>
using namespace std;
struct book{
    int bookId;
    char title[20];
    float price;
};
int main(){
    book b1,b2;
    cout<<"enter the bookId :";
    cin>>b1.bookId;
    cout<<"enter the title :";
    cin>>b1.title;
    cout<<"enter the price :";
    cin>>b1.price;
    b2.bookId = 102;
    strcpy(b2.title,"rajeshshukla");
    b2.price = 300.20;
    cout<<"b2.bookId :"<<b2.bookId<<endl;
    cout<<"b2.title :"<<b2.title<<endl;
    cout<<"b2.price :"<<b2.price<<endl;
}
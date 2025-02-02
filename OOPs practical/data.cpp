#include<iostream>
using namespace std;
class setdata{
    private :
        int date;
        int month;
        int year;
    public:
        setdata (int d,int m,int y){
        date = d;
        month = m;
        year = y;
        }
        void showdata(){
        cout<<date<<"/"<<month<<"/"<<year<<endl;
        }
};
int main(){
    setdata setdata1(29,2,2004);
    cout<<"the date of birth is :";
    setdata1.showdata();
    cout<<"the today date is :";
    setdata setdata2(13,5,2024);
    setdata2.showdata();
    return 0;
}

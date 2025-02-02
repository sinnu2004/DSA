#include<iostream>
#include<string>
using namespace std;
class Cricketer{
    private:
        string name;
        int age;
    public:
        void setdata(string name){
            this->name = name;
        }
        void setdata(int age){
            this->age = age;
        }
        void getdata(){
            cout<<"player name is :"<<name<<endl;
            cout<<age<<endl;
        }
};
int main(){
    Cricketer virat;
    virat.setdata("virat");
    virat.setdata(36);
    virat.getdata();
    Cricketer *India = new Cricketer;
    Cricketer rohitObject = *India;
    rohitObject.setdata("rohit");
    rohitObject.setdata(37);
    rohitObject.getdata();
    for(int i=0;i<9;i++){
        Cricketer *i = new Cricketer;
        string name;
        cout<<"enter the name :";
        cin>>name;
        Cricketer x = *i;
        cout<<"enter the name :";
        cin>>name;
        string name = x;
        int age;
        cout<<"enter the age :";
        cin>>age;
        name.setdata(age);
        name.getdata();
    }
}
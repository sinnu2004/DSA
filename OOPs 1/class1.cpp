#include<iostream>
#include<string>
#include<vector>
using namespace std;
class student{
    private:
        string name;
        int age;
    public:
        void setdata(string n,int a){
            name = n;
            age = a;
        }
        void getdata(){
            cout<<name<<endl;
            cout<<age<<endl;
        }
};
int main(){
    student sinnu,ravi,shukla,pandey,paras;
    sinnu.setdata("sinnu",20);
    ravi.setdata("ravi",20);
    shukla.setdata("vikas",21);
    pandey.setdata("shivam",20);
    paras.setdata("paras",21);
    sinnu.getdata();
    ravi.getdata();
    shukla.getdata();
    pandey.getdata();
    paras.getdata();
}
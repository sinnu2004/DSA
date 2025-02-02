#include<iostream>
#include<string>
using namespace std;
class student{
    private:
        string name;
        int age;
        string gender;
        string grade;
        string address;
    
    public:
        student(string n,int a,string gen,string gr,string addr){
            name = n;
            age = a;
            gender = gen;
            grade = gr;
            address = addr;
        }

        void biodata(){
            cout<<"name :"<<name<<endl;
            cout<<"age :"<<age<<endl;
            cout<<"gender :"<<gender<<endl;
            cout<<"grade :"<<grade<<endl;
            cout<<"address :"<<address<<endl;
        }
};
int main(){
    string n,gen,gr,addr;
    int a;
    cout<<"enter the name of student :";
    getline(cin,n);
    cout<<"enter the gender of student :";
    getline(cin,gen);
    cout<<"enter the grade of student :";
    getline(cin,gr);
    cout<<"enter the address of student :";
    getline(cin,addr);
    cout<<"enter the age of student :";
    cin>>a;
    student student1(n,a,gen,gr,addr);
    student1.biodata();
    return 0;
}

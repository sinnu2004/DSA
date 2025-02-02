#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Student{
public:
    string name;
    int rollno;
    float marks; 
    Student(string name,int rollno,float marks){
        this->name = name;
        this->rollno = rollno;
        this->marks= marks;
    }
};
void change(Student* s){
    s->name = "saurabh";
    s->marks = 96.7;
}
int main(){ 
    Student s("sinnu",68,72.0);

    // another way for declaration 

    Student* P = new Student("saurabh",20,33.0);  // P is a pointer variable and dynamically memory allocated 
    cout<<s.name<<endl;
    change(&s);
    cout<<s.name<<endl;

    // using pointer 
    cout<<s.name<<endl;
    Student* ptr = &s;
    (*ptr).name = "prajapat";
    cout<<s.name<<endl;
    
    ptr->name = "sanket";
    cout<<s.name<<endl;      
}
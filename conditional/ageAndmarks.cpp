#include<iostream>
using namespace std;

// write a code to check the age range of kid

int main(){
    int age; // initializing age
    // cin>>age; // taking input from user
    age = 14; // declaring age 
    cout<<age<<endl;
    if(age<=12){
        cout<<"child "<<endl;
    }
    else if (age>=18){
        cout<<"adult"<<endl;
    }
    else cout<<"teenager"<<endl;

// write a code to check the student's grade 

    int marks;
    cout<<"marks: ";
    cin>>marks;
    if(marks>=91) cout<<"exellent";
    else if (marks>=81) cout<<"very good";
    else if(marks>=71) cout<<"good";
    else if(marks>=61) cout<<"to be improved";
    else if(marks>=51) cout<<"average";
    else if(marks>=41) cout<<"below average";
    else if(marks>=33) cout<<"just passed";
    else cout<<"fail";
}


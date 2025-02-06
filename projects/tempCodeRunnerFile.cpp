-- Active: 1736660581037@@127.0.0.1@3306@university
#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
using namespace std;
void login(int &admincount,int &studentcount);
void registration();
void forget();
void available_book(vector<string> &book,string b_name);
void add_book(vector<string> &book,string b_name);
void issue_book(string b_name,string st_id,vector<string>& book,stack<string>& history);
void issue_history(stack<string>& history);
void search_book(vector<string>& book,string b_name);
void req_book(string b_name,vector<string>& book,queue<string>& req);
void admin(vector<string>& book,stack<string>& history);
void student(vector<string>& book,queue<string>& req);


int main(){
    vector<string> book;    // 
    stack<string> history;
    queue<string> req; 
    cout<<endl;
    cout<<"\t\t\t|..............................................|\n\n";
    cout<<"\t\t\t|        welcome to the menu page              |\n\n";
    cout<<"\t\t\t|          1. login                            |\n\n";
    cout<<"\t\t\t|          2. registration                     |\n\n";
    cout<<"\t\t\t|          3. forget password                  |\n\n";
    cout<<"\t\t\t|          4. exit                             |\n\n";
    cout<<"\t\t\t|..............................................|\n\n\n";
    cout<<"\t\t\t       please enter your choice : ";
    int choice;
    cin>>choice;
    cout<<endl;
    int admincount = 0;
    int studentcount = 0;
    switch(choice){
        case 1:{
            login(admincount,studentcount);
            if(admincount==1) admin(book,history);
            else if(studentcount==1) student(book,req);
            break;
        }
        case 2 :{
            registration();
            break;
        }
        case 3 :{
            forget();
            break;
        }
        case 4 :{
            system("cls");
            cout<<"\t\t\t.................THANK YOU......................"<<endl;
            main();
        }
        default :{
            system("cls");
            cout<<"\t\t\t Please select from the above given option "<<endl;
        }
    }
}
void login(int &admincount,int &studentcount){
    int count;
    string usertype,username,password,utype,id,pass;
    system("cls");
    cout<<"\t\t\t enter the user type ";
    cin>>usertype;
    cout<<"\t\t\t Please enter the username and password :"<<endl;
    cout<<"\t\t\t USERNAME ";
    cin>>username;
    cout<<"\t\t\t PASSWORD ";
    cin>>password;

    ifstream input("try.txt");
    while(input>>utype>>id>>pass){
        if(utype==usertype && id==username && pass==password){
            count = 1;
            if(utype=="admin") admincount = 1;
            else if(utype=="student") studentcount = 1;
            system("cls");
        }
    }
    input.close();
    if(count==1){
        cout<<username<<"\n\t\t\t Your LOGIN is successfull \n\t\t\t THANKS FOR LOGGING IN : \n\n";
        //main();
    }
    else {
        cout<<"\n\t\t\t LOGIN ERROR \n\t\t\t PLEASE CHECK YOUR USERNAME AND PASSWORD \n\n\n";
        main();
    }
}
void registration(){
    string usertype,username,password,rtype,rid,rpass;
    system("cls");
    cout<<"\t\t\t Enter the user type :";
    cin>>usertype;
    cout<<"\t\t\t Enter the username : ";
    cin>>username;
    cout<<"\t\t\t Enter the password : ";
    cin>>password;

    ofstream f1("try.txt",ios::app);
    f1<<usertype<<' '<<username<<' '<<password<<endl;
    system("cls");
    cout<<"\t\t\t REGISTRATION IS SUCCESSFUL \n\n\n";
    main();
}
void forget(){
    int option;
    system("cls");
    cout<<"\t\t\t You forget the password? NO Worries \n";
    cout<<"Press 1 to search your id by username "<<endl;
    cout<<"Press 2 to go back to main menu "<<endl;
    cout<<"\t\t\t Enter your choice :";
    cin>>option;
    switch(option){
        case 1 :{
            int count = 0;
            string utype,suserid,sid,spass;
            cout<<"\t\t\t enter the username which you remembered  :";
            cin>>suserid;
            ifstream f2("try.txt");
            while(f2>>utype>>sid>>spass){
                if(sid==suserid){
                    count = 1;
                }
            }
            f2.close();
            if(count==1){
                cout<<"\t\t\t your account is found : \n";
                cout<<"\t\t\t your password is : \n"<<spass;
                main();
            }
            else {
                cout<<"\t\t\t sorry your account not found ";
                main();
            }
            break;
        }
        case 2 :{
            main();
        }
        default :{
            cout<<"\t\t\t wrong choice ! Please select correct option \n";
            forget();
        }
    }
}


void available_book(vector<string> &book,string b_name){
    int count = 0;
    for(int i=0;i<book.size();i++){
        if(book[i]==b_name) {
            cout<<"\t\t\t the books:"<<book[i]<<" is available \n\n";
            count = 1;
        }
    }
    if(count==0) cout<<"the book "<<b_name<<" is not available";
    cout<<endl;
}
void add_book(vector<string> &book,string b_name){
    system("cls");
    book.push_back(b_name);
    cout<<"the book "<<b_name<<" is added successfully \n\n";
}
void issue_book(string b_name,string st_id,vector<string>& book,stack<string>& history){
    system("cls");
    history.push(b_name);
    for(int i=0;i<book.size();i++){
        if(book[i]==b_name) book[i] = st_id;
    }
}
void issue_history(stack<string>& history){
    system("cls");
    stack<string> temp;
    cout<<"the issued books are :";
    while(history.size()>0){
        cout<<history.top()<<" ";
        temp.push(history.top());
        history.pop();
    }
    while(temp.size()>0){
        history.push(temp.top());
        temp.pop();
    }
    cout<<"\n\n";
}
void search_book(vector<string>& book,string b_name){
    system("cls");
    int count = 0;
    for(int i=0;i<book.size();i++){
        if(book[i]==b_name) {
            cout<<"\t\t\t book found \n\n";
            count = 1;
        }
    }
    if(count==0) cout<<"book not found \n\n";
}
void req_book(string b_name,vector<string>& book,queue<string>& req){
    system("cls");
    int count = 0;
    for(int i=0;i<book.size();i++){
        if(book[i]==b_name) {
            req.push(b_name);
            count = 1;
        }
    }
    if(count==0) cout<<"\t\t\t book not available \n\n";
}
void admin(vector<string>& book,stack<string>& history){
    cout<<"\t\t\t|..............................................|\n\n";
    cout<<"\t\t\t|        welcome to the admin page             |\n\n";
    cout<<"\t\t\t|      1. add books                            |\n\n";
    cout<<"\t\t\t|      2. check availability                   |\n\n";
    cout<<"\t\t\t|      3. issued book                          |\n\n";
    cout<<"\t\t\t|      4. check issued book history            |\n\n";
    cout<<"\t\t\t|      5. for exit project                     |\n\n";
    cout<<"\t\t\t|..............................................|\n\n";

    int choice;
    cout<<"enter the choice :";
    cin>>choice;
    switch(choice){
        case 1 : {
            string b_name;
            cout<<"enter the book name :";
            cin>>b_name;
            add_book(book,b_name);
            admin(book,history);
        }
        case 2 : {
            string b_name;
            cout<<"enter the book name to check availability :";
            cin>>b_name;
            available_book(book,b_name);
            admin(book,history);
        }
        case 3 : {
            string b_name;
            cout<<"enter the book name :";
            cin>>b_name;
            string st_id;
            cout<<"enter the student id :";
            cin>>st_id;
            issue_book(b_name,st_id,book,history);
            admin(book,history);
        }
        case 4 : {
            issue_history(history);
            admin(book,history);
        }
        case 5 : {
            main();
        }
        default : {
            cout<<"wrong choice ";
            admin(book,history);
        }
    }
}
void student(vector<string>& book,queue<string>& req){
    cout<<"\t\t\t|..............................................|\n\n";
    cout<<"\t\t\t|        welcome to the student page           |\n\n";
    cout<<"\t\t\t|       1. search book                         |\n\n";
    cout<<"\t\t\t|       2. request book issue                  |\n\n";
    cout<<"\t\t\t|       3. exit                                |\n\n";
    cout<<"\t\t\t|..............................................|\n\n";


    int choice;
    cout<<"enter the choice :";
    cin>>choice;
    switch(choice){
        case 1: {
            string b_name;
            cout<<"enter the finding book name :";
            cin>>b_name;
            search_book(book,b_name);
            student(book,req);
        }
        case 2: {
            string b_name;
            cout<<"enter the book name for request :";
            cin>>b_name;
            req_book(b_name,book,req);
            student(book,req);
        }
        case 3 : {
            main();
        }
        default : {
            cout<<"wrong choice ";
            student(book,req);
        }
    }
}
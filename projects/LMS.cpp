#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
using namespace std;
void available_book(vector<string> &book){
    for(int i=0;i<book.size();i++){
        cout<<"\t\t\t the books are :"<<book[i]<<" ";
    }
    cout<<endl;
}
void add_book(vector<string> &book,string b_name){
    book.push_back(b_name);
}
void issue_book(string b_name,string st_id,vector<string>& book,stack<string>& history){
    history.push(b_name);
    for(int i=0;i<book.size();i++){
        if(book[i]==b_name) book[i] = st_id;
    }
}
void issue_history(stack<string>& history){
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
    cout<<endl;
}
void search_book(vector<string>& book,string b_name){
    int count = 0;
    for(int i=0;i<book.size();i++){
        if(book[i]==b_name) {
            cout<<"book found ";
            count = 1;
        }
    }
    if(count==0) cout<<"book not found ";
}
void req_book(string b_name,vector<string>& book,queue<string>& req){
    int count = 0;
    for(int i=0;i<book.size();i++){
        if(book[i]==b_name) {
            req.push(b_name);
            count = 1;
        }
    }
    if(count==0) cout<<"book not available ";
}
void admin(vector<string>& book,stack<string>& history){
    cout<<"\t\t\t welcome to the admin page \n\n";
    cout<<"\t\t\t 1. add books \n\n";
    cout<<"\t\t\t 2. check availability \n\n";
    cout<<"\t\t\t 3. issued book  \n\n";
    cout<<"\t\t\t 4. check issued book history \n\n";
    cout<<"\t\t\t 5. for exit project \n\n";

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
            available_book(book);
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
            cout<<"thank you ";
            break;
        }
        default : {
            cout<<"wrong choice ";
            admin(book,history);
        }
    }
}
void student(vector<string>& book,queue<string>& req){
    cout<<"\t\t\t welcome to the student page \n\n";
    cout<<"\t\t\t 1. search book \n\n";
    cout<<"\t\t\t 2. request book issue \n\n";
    cout<<"\t\t\t 3. exit \n\n";

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
            cout<<"thank you ";
            break;
        }
        default : {
            cout<<"wrong choice ";
            student(book,req);
        }
    }
}
int main(){
    vector<string> book;
    stack<string> history;
    queue<string> req;   
    // vector<string> student;
    // queue<int> book_id;


    cout<<"\t\t\t  welcome to the main page \n\n";
    cout<<"\t\t\t 1. Admin \n\n";
    cout<<"\t\t\t 2. Student \n\n";
    cout<<"\t\t\t 3. exit \n\n";
    cout<<"\t\t\t 4. for exit project \n\n";
    
    int choice;
    cout<<"\t\t\t enter the choice :";
    cin>>choice;

    switch(choice){
        case 1 : {
            admin(book,history);
            break;
        }
        case 2 : {
            student(book,req);
            break;
        }
        case 3 : {
            return 0;
            break;
        }
        case 4 : {
            cout<<"thank you ";
            break;
        }
        default : {
            cout<<"wrong choice please try again ";
            main();
        }
    }
}
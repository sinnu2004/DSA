#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
using namespace std;
void add_book(vector<string> &book,string b_name){
    book.push_back(b_name);
}
void search_book(vector<string> &book,string f_name){
    int lo = 0;
    int hi = book.size()-1;
    string x = "python";
    while(lo<=hi){
        int mid = (hi+lo)/2;
        if(book[mid]==x) {
            cout<<"found";
            break;
        }
        else if(book[mid]>x) lo = mid + 1;
        else hi = mid - 1;
    }
    cout<<endl;
}
void all_book(vector<string>& book){
    for(int i=0;i<book.size();i++){
        cout<<book[i]<<" ";
    }
    cout<<endl;
}
void alloted_request(queue<string>& q,string r_name){
    q.push(r_name);
}
void request_history(queue<string>& q){
    while(q.size()>0){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
void add_student(vector<string>& student,string st_name){
    student.push_back(st_name);
}
void st_request_history(queue<int>& book_id,int b_id){
    book_id.push(b_id);
}
void st_history(queue<int>& book_id){
    while(book_id.size()>0){
        cout<<book_id.front()<<" ";
        book_id.pop();
    }
    cout<<endl;
}
int main(){
    vector<string> book;
    add_book(book,"python");   // for adding a new books 
    add_book(book,"c++");
    add_book(book,"java");
    search_book(book,"java");  // for searching a books 
    all_book(book);             // for printing all available books
    queue<string> q;   
    string r_name = "java";
    alloted_request(q,r_name);  // pull request for book allotments
    request_history(q);         // request history of books

    vector<string> student;
    queue<int> book_id;
    add_student(student,"saurabh");   // adding new students
    st_request_history(book_id,123);  // students pull request for book allotment
    st_history(book_id);               // book request history
}
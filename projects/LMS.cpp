#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
using namespace std;
class book{
    public :
        string book_name[10];
        int book_id;
        int idx = 0;
    public :
        void add_book(int id,string b_name){
            book_id = id;
            book_name[idx] = b_name;
            idx++;
        }
        void getdata(){
            cout<<book_id<<" ";
            cout<<book_name[idx-1]<<" ";
        }
        void data(){
            cout<<"book data :";
            for(int i=0;i<idx;i++){
                cout<<book_name[idx]<<" ";
            }
            cout<<endl;
        }
};
class student{
    public :
        string students[5];
        int sidx = 0;
        int alloted_book_id;
        string roll_no;
    public :
        void st_data(string st_name,string roll_no){
            students[sidx] = st_name;
            this->roll_no = roll_no;
            sidx++;
        }
        void book_alloted(int allot = -1){
            alloted_book_id = allot;
        }
        void getdata(){
            cout<<students[sidx-1]<<" ";
            cout<<roll_no<<" ";
            cout<<alloted_book_id<<" ";
        }
};
class libary{
    public :
        queue<int> request;
        stack<int> history;
    public :
        void book_allot(int req){
            request.push(req);
        }
        void hist_allot(int his){
            history.push(his);
        }
        void display_history(){
            while(history.size()>0){
                cout<<history.top()<<" ";
                history.pop();
            }
        }
        void display_allot(){
            while(request.size()>0){
                cout<<request.front()<<" ";
                request.pop();
            }
        }
};
int main(){
    book b1;
    b1.add_book(1,"python");
    b1.add_book(2,"c++");
    b1.add_book(3,"java");
    b1.add_book(4,"R");
    b1.add_book(5,"c");
    cout<<"book alloted data :";
    b1.getdata();
    cout<<endl;

    b1.data();
    // student s1;
    // s1.st_data("saurabh","68");
    // s1.book_alloted();
    // s1.getdata();
    // cout<<endl;

    libary lib;
    lib.book_allot(123);
    lib.book_allot(223);
    lib.book_allot(334);
    lib.book_allot(667);
    lib.hist_allot(12);
    lib.hist_allot(21);
    lib.hist_allot(22);
    lib.hist_allot(45);
    lib.hist_allot(55);
    lib.hist_allot(67);
    cout<<"book allot history :"<<endl;
    lib.display_history();
    cout<<endl;
    cout<<"books alloted :"<<endl;
    lib.display_allot();
}
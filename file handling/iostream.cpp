#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;   // creation of ofstream class object

    string book_name;

    fout.open("sample.txt",ios::app);   

    while(fout){
        cout<<"enter the book name :";
        getline(cin,book_name);  // for taking input of data

        // fout<<book_name<<endl;   // for write the operation in file

        if(book_name == "-1") 
            break;  // press -1 to exit

        fout<<book_name<<endl;   // for write the operation in file 
    }
    fout.close();   // closing the file 
    
    ifstream fin;   // creation of ifstream class object
    
    fin.open("sample.txt"); 

    while(getline(fin,book_name)){
        if(book_name=="gh") cout<<book_name<<endl;
    }
    fin.close();
}
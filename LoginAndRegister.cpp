#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;
void login();
void registration();
void forget();
int main(){
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
    switch(choice){
        case 1:{
            login();
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
void login(){
    int count;
    string username,password,id,pass;
    system("cls");
    cout<<"\t\t\t Please enter the username and password :"<<endl;
    cout<<"\t\t\t USERNAME ";
    cin>>username;
    cout<<"\t\t\t PASSWORD ";
    cin>>password;
    ifstream input("records.txt");
    while(input>>id>>pass){
        if(id==username && pass==password){
            count = 1;
            system("cls");
        }
    }
    input.close();
    if(count==1){
        cout<<username<<"\n Your LOGIN is successfull \n THANKS FOR LOGGING IN : \n\n";
        main();
    }
    else {
        cout<<"\n LOGIN ERROR \n PLEASE CHECK YOUR USERNAME AND PASSWORD \n\n\n";
        main();
    }
}
void registration(){
    string username,password,rid,rpass;
    system("cls");
    cout<<"\t\t\t Enter the username : ";
    cin>>username;
    cout<<"\t\t\t Enter the password : ";
    cin>>password;

    ofstream f1("records.txt",ios::app);
    f1<<username<<' '<<password<<endl;
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
            string suserid,sid,spass;
            cout<<"\t\t\t enter the username which you remembered  :";
            cin>>suserid;
            ifstream f2("records.txt");
            while(f2>>sid>>spass){
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
                cout<<"\t\t sorry your account not found ";
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
#include<iostream>
using namespace std;
int main(){
    int card,pin;
    cout<<"enter the card :";
    cin>>card;
    if(card==1){
        cout<<"the card is under processed"<<endl;
        cout<<"enter pin :";
        cin>>pin;
        if(pin==2864){
            cout<<"pin is correct"<<endl;
            int option,receipt;
            cout<<"1 = cash_withdraw"<<endl;
            cout<<"2 = cash_deposit"<<endl;
            cout<<"3 = balance enquiry"<<endl;
            cout<<"option:";
            cin>>option;
                if(option==1){
                    cout<<"enter the cash withdraw amount:";
                    int amount;
                    cin>>amount;
                    cout<<endl;
                    cout<<"amount is under process"<<endl;
                    cout<<"do you want receipt"<<endl;
                    cin>>receipt;
                        if(receipt==1){
                            cout<<"your receipt is under process";
                        }
                        else cout<<"thank you";
                }
                else if(option==2){
                    cout<<"enter the cash deposit amount:";
                    int amount;
                    cin>>amount;
                    cout<<endl;
                    cout<<"enter cash "<<endl;
                    cout<<"do you want receipt"<<endl;
                    cin>>receipt;
                        if(receipt==1){
                            cout<<"your receipt is under process";
                        }   
                        else cout<<"thank you";
                }
                else if(option==3) {
                    cout<<"your bank balance is 500000";
                    cout<<"do you want receipt"<<endl;
                    cin>>receipt;
                        if(receipt==1){
                            cout<<"your receipt is under process";
                        }
                        else cout<<"thank you";
                }
        }
        else cout<<"pin is incorrect";
    }
    else cout<<"card is not processed";
}
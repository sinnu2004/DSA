#include<iostream> 
using namespace std;
int main(){
    int n;
    cout<<"enter the year :";
    cin>>n;
    if(n%100==0){
        if(n%400==0) cout<<"year "<<n<<" is a leap year";
        else cout<<"year "<<n<<" is not a leap year";
    } 
    else {
        if(n%4==0) cout<<"year "<<n<<" is a leap year";
        else cout<<"year "<<n<<" is not a leap year";
    }
}
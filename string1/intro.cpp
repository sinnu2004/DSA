#include<iostream>
using namespace std;
// note = har string ke end me null string hoti hai. bina loop chalaye bhi print kra sakte hai
int main(){
    char str[] = { 'a', 'b', 'c', 'd'};
    for(int i=0;i<4;i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    string str2 = "saurabh prajapat";
    cout<<str2;
}
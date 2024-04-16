#include<iostream> 
using namespace std;
int main(){
    string str = "saurabh";
    int count = 0;
    for(int i=0;i<=8;i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }
    cout<<count;
}
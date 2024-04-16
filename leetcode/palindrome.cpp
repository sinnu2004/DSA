#include<iostream>
#include<climits>
using namespace std;
int main(){
    int x;
    cout<<"x:";
    cin>>x;
    int dup = x;
    bool flag = true;
    long long int rev = 0;
    int ld;
    while(x>0){
        ld = x%10;
        rev = rev*10 + ld;
        x/=10;
    }
    if(rev==dup){
        flag = true;
    }
    else flag = false;
    if(flag==true){
        cout<<"palindrome";
    }
    else cout<<"not palindrome";
}
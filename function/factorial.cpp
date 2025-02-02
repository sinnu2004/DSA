#include<iostream>
using namespace std;
class fact{
    int n;
    int f;
    int g = 1;
    
    public:
    int factorial(int);
    void init();
    void dis();
    void dis2();
    void inp();
    void ncr();
    };
    void fact:: inp(){
        cin>>n;
    }
    void fact:: init(){
        factorial(n);
    }
    int fact:: factorial(int fact){
        for(int i=2;i<=fact;i++){
            g *= i;
        }
    }
    void fact::dis(){
        cout<<g;
    }
    int main(){
        fact fa;
        fa.inp();
        fa.init();
        fa.dis();
        return 0;
    }
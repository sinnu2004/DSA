#include<iostream>
using namespace std;
class fact{
    private:
    int n;
    int f;
    int g = 1;

    public:
    int factorial(int);
    void init();
    void dis();
    void inp();
    };

    void fact::inp(){
        cout<<"enter the number :";
        cin>>n;
    }

    void fact::init(){
        factorial(n);
    }

    int fact::factorial(int fact){
        for(int i=2;i<=fact;i++){
            g *= i;
        }
    }

    void fact::dis(){
        cout<<"the factorial of "<<n<<" is :"<<g;
    }

    int main(){
        fact fa;
        fa.inp();
        fa.init();
        fa.dis();
        return 0;
    }
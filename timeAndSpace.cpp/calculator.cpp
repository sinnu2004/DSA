#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
 class calculator{
    private:
        double num1;
        double num2;
        char operate;
    public:
        void input(){  // taking num1 input 
            cin>>num1;
        }
        // taking operator input 
        char operation(){
            cin>>operate;
            return operate;
        }
        void input2(){  // taking num2 input 
            cin>>num2;
        }
        double addition(char operation){
            return num1 = num1 + num2;
        }
        int substraction(char operation){
            return num1 = num1-num2;
        }
        double division(char operation){
            if(num2>0) return num1 = num1/num2;
            else "0 can not be divisor ";
        }
        float multiplication(char operation){
            return num1 = num1*num2;
        }
        double srt(char operation){
            num1 = sqrt(num1);
            return num1;
        }
        void result(){
            cout<<num1;
        }
};
class Scientific : public calculator{
    
};
void BasicCalci(calculator calci){
    calci.input();  // nums1 get some value 
    for(int i=0;i<5;i++){  // applying loop for multiple inputs 
        char operate = calci.operation();   // taking input of operator 
        if(operate=='='){
            cout<<"the ans is :"; 
            calci.result();
            break;
        }
        calci.input2(); // callint input2 object
        // perform calculation according to the operator 
        switch (operate){
            case '+':{
                calci.addition(operate);
                break;
            }
            case '-':{
                calci.substraction(operate);
                break;
            }
            case '*': {
                calci.multiplication(operate);
                break;
            }
            case '/': {
                calci.division(operate);
                break;
            }
            case '$':{
                calci.srt(operate);
                break;
            }
        }
    }
}
int main(){
    calculator calci;
    Scientific scientificCalci;
    BasicCalci(calci);
    scientificCalci(scientificCalci);
}
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
class Prime{
    private:
        int num1;
        int num2;
    public:
        int input(){
            cout<<"enter the num1 :";
            cin>>num1;
            return num1;
        }
        int input2(){
            cout<<"enter the num2 :";
            cin>>num2;
            return num2;
        }
        void ValidPrime(int &n){
            bool flag = true;
            for(int i=2;i<sqrt(n);i++){
                if(n%i==0) {
                    flag = false;
                    cout<<n<<" is not a prime number";
                    break;
                }
            }
            if(flag==true) cout<<n<<" is a prime number";
        }
        int CountPrime(int &n, int &m){
            if(n<=1 || m<=1) return 0;
            int count = 0;
            int s = m;
            vector<int> Pr(s+1,1);
            for(int i=0;i<n;i++){
                Pr[i] = 0;
            }
            for(int i=n;i<=sqrt(m);i++){
                for(int j=2*i;j<=m;j+=i){
                    Pr[j] = 0;
                }
            }
            for(int i=0;i<=m;i++){
                if(Pr[i]==1) count++;
            }
            return count;
        }
        int PrimeSum(int &m){
            if(m<=1) return 0;
            int sum = 0;
            int s = m;
            vector<int> Pr(s+1,1);
            for(int i=0;i<2;i++){
                Pr[i] = 0;
            }
            for(int i=2;i<=sqrt(m);i++){
                for(int j=2*i;j<=m;j+=i){
                    Pr[j] = 0;
                }
            }
            cout<<sum<<endl;
            for(int i=0;i<=m;i++){
                if(Pr[i]==1) sum += i;
            }
            return sum;
        }
};
int main(){
    calculator calci;
    Prime calciprime;
    int num1 = calciprime.input();
    int num2 = calciprime.input2();
    calciprime.ValidPrime(num1)<<endl;
    cout<<calciprime.CountPrime(num1,num2)<<endl;
    cout<<calciprime.PrimeSum(num2)<<endl;
    calci.input();  // nums1 get some value 
    for(int i=0;i<50;i++){  // applying loop for multiple inputs 
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
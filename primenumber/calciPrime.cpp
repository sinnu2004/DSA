#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
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
    Prime calciprime;
    int num1 = calciprime.input();
    int num2 = calciprime.input2();
    calciprime.ValidPrime(num1)<<endl;
    cout<<calciprime.CountPrime(num1,num2)<<endl;
    cout<<calciprime.PrimeSum(num2)<<endl;
}
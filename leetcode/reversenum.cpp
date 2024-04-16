#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long int x;
    cout<<"x :";
    cin>>x;
    long long int reverse = 0;
    long long int ld;
    while(x>0 || x<0){
        ld = x%10;
        reverse = reverse*10 + ld;
        x/=10;
    }
    cout<<reverse;  
} 
 //leetcode by vector
/* if ((x > INT_MAX) || (x < INT_MIN)) {
            return 0;
        }
        long long int x_mod;
        if (x < 0)
            x_mod = -x;
        else 
            x_mod = x;      

        long long int rev = 0;
        while(x_mod>0){
            int ld = x_mod%10;
            rev = rev*10 + ld;
            x_mod= x_mod/10;
        }
        if (x < 0) {
            return -rev;
        } 
        return rev;
    }
*/
#include<iostream>
#include<stack>
using namespace std;
int prio(char ch){
    if(ch=='+') return 1;
    else return 2;
}
int solve(int val1,int val2,char ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}
int main(){
    string s = "1+(2+6)*4/8-3";
    cout<<s<<endl;
    stack<int> val;
    stack<char> op;
    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=57) val.push(s[i]-48);
        else{
            if(op.size()==0) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.pop();  // opening bracket gya 
            }
            else if(prio(op.top())<prio(s[i])) op.push(s[i]);
            else {
                while(op.top()>0 && prio(op.top())>=prio(s[i])){
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    while(op.size()>0){
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<val.top()<<endl;
    cout<<1+(2+6)*4/8-3<<endl;
}
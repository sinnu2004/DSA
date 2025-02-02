#include<iostream>
#include<stack>
using namespace std;
int prio(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2; // * /
}
int solve(int val1,char ch,int val2){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}
int main(){
    string s = "2+6*4/8-3";   // infix expression
    cout<<s<<endl;
    // we need two stack 1 for value, 1 for operator
    stack<int> val;
    stack<char> op;
    for(int i=0;i<s.length();i++){
        // check s[i] is a digit (0-9)
        if(s[i]>=48 && s[i]<=57){  // ascii values of 0-9 
            val.push(s[i]-48);
        }
        else {// s[i]!= digit 
            if(op.size()==0 || prio(s[i])>prio(op.top())) 
                op.push(s[i]);
            else {  // work , priority(s[i])<=priority(op.top());
                while(op.size()>0 && prio(s[i]) <= prio(op.top())){
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1,ch,val2);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    // the operator stack can have values so make it empty ;
    while(op.size()>0){
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1,ch,val2);
        val.push(ans);
    }
    cout<<val.top()<<endl;
    cout<<2+6*4/8-3<<endl;
}
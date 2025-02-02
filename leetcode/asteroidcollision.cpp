#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    int arr[] = {-2,-1,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> asteroids(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<asteroids[i]<<" ";
    }
    cout<<endl;
    stack<int> st;
    stack<int> temp;
    for(int i=0;i<n;i++){
        st.push(asteroids[i]);
    }
    while(st.size()>0){
        cout<<st.top()<<" ";
        if(st.top()<0){
            int x = st.top();   // x = -5
            cout<<"x :"<<x<<" ";
            st.pop();  // 10 
            if(st.top()>0 && st.top()>abs(x)) {
                if(temp.size()>0) temp.pop();
                temp.push(st.top());
            }
            else if(st.top()>0 && st.top()<abs(x)) {
                temp.push(x);  // -5
                st.pop();  
                st.push(x);  // 10 -5
            }
            else if(st.top()==abs(x)) st.pop();
            else if(st.top()<0) temp.push(st.top());
        }
        else {
            st.pop();
            if(st.size()>0) temp.push(st.top());
        }
        cout<<endl;
        cout<<"t :"<<temp.top()<<" ";
        cout<<endl;
    }
    cout<<endl;
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        temp.pop();
    }
}
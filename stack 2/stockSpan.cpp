#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {100,80,60,81,70,60,75,85};  // 1 1 1 3 1 1 3 7
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ans[n];  // index array 
    stack<int> st;
    ans[0] = 1;
    st.push(0);
    for(int i=1;i<=n-1;i++){
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(st.size()==0) ans[i] = -1;
        else ans[i] = st.top();
        ans[i] = i-ans[i];
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
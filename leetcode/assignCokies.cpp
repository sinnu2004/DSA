#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"n:";
    cin>>n;
    int m;
    cout<<"m :";
    cin>>m;
    vector<int> g(n);
    vector<int> s(m);
    cout<<"enter the elements of children";
    for(int i=0;i<n;i++){
        cin>>g[i];
    }
    cout<<"enter the element of cokies";
    for(int i=0;i<m;i++){
        cin>>s[i];
    }
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    int count = 0;
    int i=0;
    int j = 0;
    while(i<g.size() && j<s.size()){
        if(s[j]>=g[i]){
            count++;
            i++;
            j++;
        }
        else j++;
    }
    cout<<"the number of cookies is :"<<count<<endl;
}
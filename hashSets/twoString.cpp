#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string word1 = "cabbba";
    string word2 = "aabbss";
    unordered_map<char,int> m1;
    unordered_map<char,int> m2;
    string s;
    for(int i=0;i<word1.length();i++){
        pair<char,int> p1;
        p1.first = word1[i];
        char x = word1[i];
        if(m1.find(x)==m1.end()) m1.insert(p1);
        else m1[p1.first]++;
    }
    string v;
    for(int i=0;i<word2.length();i++){
        pair<char,int> p2;
        p2.first = word2[i];
        char x = word2[i];
        if(m2.find(x)==m2.end()) m2.insert(p2);
        else m2[p2.first]++;
    }
    vector<int> tem1;
    for(auto x : m1){
        s += x.first;
        cout<<x.first<<" "<<x.second<<" ";
        tem1.push_back(x.second);
    }
    cout<<endl;
    vector<int> tem2;
    for(auto x : m2){
        v += x.first;
        cout<<x.first<<" "<<x.second<<" ";
        tem2.push_back(x.second);
    }
    cout<<endl;
    cout<<s<<endl;
    cout<<v<<endl;
    sort(s.begin(),s.end());
    sort(v.begin(),v.end());
    cout<<s<<endl;
    cout<<v<<endl;
    int i = 0;
    while(i<v.length()){
        if(s[i]!=v[i]) cout<<false;
        i++;
    }
    cout<<endl;
    for(int i=0;i<tem1.size();i++){
        cout<<tem1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<tem2.size();i++){
        cout<<tem2[i]<<" ";
    }
    cout<<endl;
    sort(tem1.begin(),tem1.end());
    sort(tem2.begin(),tem2.end());
    int k = 0;
    int j = 0;
    while(j<tem1.size()){
        if(tem1[k]!=tem2[j]) cout<<false;
        k++;
        j++;
    }
}
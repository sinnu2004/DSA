#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
     
    // sets is a data structure in which the insertion,searching and deletion are done by TC of O(1)
    // the insertion is done in random order 
    // set only stores unique element 
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);     // s.insert(val) is used for insertion of any val
    s.insert(3);     // s.erase(val) is used for deletion of val
    s.insert(4);    // s.find(val) is used for finding the val 
    s.insert(5);    
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.erase(2);
    int target = 40;    // s.find(target)==s.end() target not exists 
    if(s.find(target)!=s.end()){   // target exists 
        cout<<"exists "<<" ";
    }
    else cout<<"Not exists ";
    cout<<endl;
    cout<<s.size()<<endl;
    // for each loop
    for(int ele : s){
        cout<<ele<<" ";
    }
    cout<<endl;
}
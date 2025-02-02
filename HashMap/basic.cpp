#include<iostream>
#include<unordered_map>
using namespace std;
// important methods in maps
// insert() m[] = 0
// size() 
// find() same as set
// erase() = m.erase("string");
// count()


int main(){
    unordered_map<string,int> m;
    pair<string,int> p1;   // map me element pairs me insert hote h 
    p1.first = "saurabh";
    p1.second = 20;
    m.insert(p1);  // way of inserting element in map
    pair<string,int> p2;
    p2.first = "harsh";
    p2.second = 22;
    m.insert(p2);
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    // second way of efficient insertion 

    m["suresh"] = 33;
    m["lokesh"] = 55;
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl;
    m.erase("saurabh");
    m.erase("sanket");
    cout<<m.size()<<endl;
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
}
// C:\Users\hario\OneDrive\Desktop\first code of c
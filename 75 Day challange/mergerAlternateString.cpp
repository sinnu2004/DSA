#include<iostream>
#include<string>
using namespace std;
int main(){
    string word1 = "ab";
    string word2 = "pqrs";

    // creating an empty string 
    string s = "";
    // declaring and initializing two variable to traverse both words 
    int i = 0; // i for traversing word1
    int j = 0; // j for traversing word2
    while(i<word1.size() && j<word2.size()){
        s += word1[i++];
        s += word2[j++];
    }
    // appending the remaining elements of word2 at the end of string s if(i==word1.size)
    if(i==word1.size()){
        while(j<word2.size()){
            s += word2[j++];
        }
    }

    // appending the remaining elements of word1 at the end of string s if(j==word2.size)
    if(j==word2.size()){
        while(i<word1.size()){
            s += word1[i++];
        }
    }
    // printing the string s 
    cout<<s<<endl;
}
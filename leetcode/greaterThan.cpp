#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<char> letters;
    letters.push_back('c');
    letters.push_back('f');
    letters.push_back('j');
    //letters.push_back('y');
    char target = 'c';
    int n = letters.size();
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        int pre = mid-1;
        int next = mid+1;
        if(letters[mid]==target){
            if(letters[pre]<target && letters[next]>target) cout<<letters[mid];
            else if(letters[pre]>target) hi = mid-1;
            else lo = mid+1;
        }
        else if(letters[mid]>target) hi = mid -1;
        else lo = mid + 1;
    }
    cout<<"theres is no :"<<endl;
    cout<<letters[0];
}
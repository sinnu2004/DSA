#include<iostream>
#include<string>
using namespace std;
int maze(int sr,int sc,int er, int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er || sc==ec) return 1;
    int rightWays = maze(sr,sc+1,er,ec);
    int downWays = maze(sr+1,sc,er,ec);
    return rightWays+downWays;
}
void printPath(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<" ";
        return;
    }
    printPath(sr,sc+1,er,ec,s+'R');
    printPath(sr+1,sc,er,ec,s+'D');
}
int maze2(int er,int ec){
    if(er<0 || ec<0) return 0;
    if(er==0 && ec==0) return 1;
    int rightways = maze2(er,ec-1);
    int upways = maze2(er-1,ec);
    return rightways+upways;
}
int main(){
    int sr,sc,er,ec;
    cout<<"enter starting row :";
    cin>>sr;
    cout<<"enter the starting column :";
    cin>>sc;
    cout<<"enter the ending row :";
    cin>>er;
    cout<<"enter the ending column :";
    cin>>ec;
    cout<<maze(sr,sc,er,ec)<<endl;
    printPath(sr,sc,ec,er,"");
    cout<<endl;
    cout<<maze2(er,ec)<<endl;
}
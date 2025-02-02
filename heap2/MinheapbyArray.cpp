#include<iostream>
#include<string>
using namespace std;
class Minheap{
    public: 
        int arr[50];
        int idx;
        Minheap(){
            idx = 1;
        }
        int top(){
            return arr[1];
        }
        void push(int x){
            arr[idx] = x;
            int i = idx;
            idx++;
            while(i!=1){
                int parent = i/2;
                if(arr[i]<arr[parent]) swap(arr[i],arr[i/2]);
                else break;
                i = i/2;
            }
        }
        int size(){
            return idx-1;
        }
        void pop(){
            if(idx==1){
                cout<<"error";
                
            }
            else{
                idx--;
                arr[1] = arr[idx];
                int i = 1;
                while(i!=idx){
                    int left = 2*i;
                    int right = 2*i + 1;
                    if(left>idx-1) break;
                    if(right>idx-1){
                        if(arr[i]>arr[left]){
                            swap(arr[i],arr[left]);
                            i = left;
                        }
                        break;
                    }
                    if(arr[left]<arr[right]) {
                        if(arr[i]>arr[left]) {
                            swap(arr[left],arr[i]);
                            i=left;
                        }
                        else break;
                    }
                    else {
                        if(arr[i]>arr[right]) {
                            swap(arr[right],arr[i]);
                            i = right;
                        }
                        else break;
                    }
                }
            }
        }
        void display(){
            for(int i=1;i<=idx-1;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};
int main(){
    Minheap pq;
    pq.push(10);
    pq.push(2);
    pq.push(14);
    pq.push(11);
    pq.push(1);
    pq.push(4);
    cout<<pq.size()<<endl;
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.push(15);
    pq.push(16);
    pq.push(3);
    pq.push(8);
    pq.pop();
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.display();
}
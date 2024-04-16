#include<iostream>
using namespace std;
// code for finding profit and loss
int main(){
    int selling_price,cost_price,profit,loss;
    cout<<"selling_price";
    cin>>selling_price;
    cout<<"cost_price";
    cin>>cost_price;
    
    profit = selling_price-cost_price;
    loss = cost_price-selling_price;
    if(selling_price>cost_price) cout<<"profit is:"<<profit;
    else if(selling_price<cost_price) cout<<"loss is:" <<loss;
    else if(selling_price==cost_price) cout<<"neither profit nor loss";

}
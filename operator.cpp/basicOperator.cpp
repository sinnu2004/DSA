#include<iostream>
using namespace std;
// c++ variable "variable is container that store value of temporary code "
/*rules 
1. variable names should not given with a number
2. whitespace is not permitted in variables names
3. reserved word can not be used like cout
4. we must prefer meaningful name
*/
// c++ identifiers names of class, method, variable
// illegal identifier 2_bc
// legar identifier _2c
// integer data type take 4 byte in memory
//1 byte = 8 bits
// charater data type take 1 byte in memory and used for defined a,b,c
// boolean data type 1 byte 
// floating data type used to store decimal and exponential it allow 7 decimal places  4 bytes
// double floating data type 15 decimal places and 8 bytes
// void data type means null or nothing cannot be defined in any line 
// wide character data type has 2 bytes 
// string data type has dynamically memory allocate 


// using different type of operators 

// addition,substraction,multiplication,division operator,modulus,pre-increment,post-increment

int main(){
    int num1,num2; // initialisation of two number
    cout<<"num1:"; 
    cin>>num1; // taking input from user 
    cout<<endl;
    cout<<"num2:";
    cin>>num2;
    int addition,substraction,product,division;
    addition = num1 + num2; 
    substraction = num1 - num2;
    product = num1*num2;
    division = num1/num2;

    cout<<"addition of two number is :"<<addition<<endl;
    cout<<"substraction of two number is :"<<substraction<<endl;
    cout<<"product of two number is :"<<product<<endl;
    cout<<"division of two number is :"<<division<<endl;

// finding remainder of two number using modulus(%) operator 
    int remainder;
    remainder = num1%num2;
    cout<<"remainder of two number is :"<<remainder<<endl;

// pre-increment and post-increment 
    num1 = 4; // update value 
    cout<<num1++<<endl; // post-increment 
    // num1 = 4 
    cout<<num1<<" "<<"post-increment"<<endl; // num1 = 5 

    ++num1;
    cout<<num1<<" "<<"pre-increment"<<endl;

    num2 = 6; // update value 
    cout<<--num2<<" "<<"pre-decrement"<<endl; // pre-decrement 
    // num2 = 5 
    
    cout<<num2--<<endl; // num2 = 5 
    cout<<num2<<" "<<"post-decrement"<<endl; // num2 = 4

// AND(&&) OR(||) operator 

int quality,quantity,price;
quality = true;
quantity = true;
price = false;
cout<<"AND operator"<<endl;
cout<<(quality && quantity)<<endl;  //true
cout<<(quality && price)<<endl;     //false
cout<<(quantity && price)<<endl;    //false

cout<<"OR operator"<<endl;
cout<<(quality || quantity)<<endl;  //true
cout<<(quality || price)<<endl;     //true
cout<<(quantity || price)<<endl;    //true

}

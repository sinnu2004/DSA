#include<iostream> 
using namespace std;
class counter{
    private:
    static int count;
    public:
    counter(){
        count++;
    }
    ~counter(){
        count--;
    }
    static int getcount(){
        return count;
    }
};
int counter :: count = 0;
int main(){
    counter obj1;
    counter obj2;
    counter obj3;
    cout<<"number of object created "<<counter::getcount()<<endl;
    {
        counter obj4;
        cout<<"number of object before destructed "<<counter::getcount()<<endl;
    }
    cout<<"number of object after destructed "<<counter::getcount()<<endl;
    return 0;
}
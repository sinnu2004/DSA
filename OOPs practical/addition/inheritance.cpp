#include<iostream> 
#include<string>
using namespace std;
class puma{
    public:
        string flexibility;
        string comfort;
        string design;
    public:
        void setdata(){
            flexibility = "yes";
            comfort = "yes";
            design = "attractive";
        }
        void getdata(){
            cout<<flexibility<<endl;
            cout<<comfort<<endl;
            cout<<design<<endl;
        }
};
class adidas: public puma{
    public:
        string colour;
        string size;
        string populatrity;
    
    public:
        void setdata_inherit(){
            colour = "huge variety";
            size = "6-10 number";
            populatrity = "5 star rating";
        }
        void getdat_inherit(){
            cout<<colour<<endl;
            cout<<size<<endl;
            cout<<populatrity<<endl;
        }
};
int main(){
    adidas track;
    track.setdata();
    //track.getdata();
    track.setdata_inherit();
    //track.getdat_inherit();
    cout<<track.colour<<endl;
    cout<<track.flexibility;

}
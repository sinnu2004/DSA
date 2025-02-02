#include<iostream>
using namespace std;
class player{
    private:
        int health;
        int age ;
        int score;
        bool alive;
    public:
        int gethealth(){
            return health;
        }
        int getage(){
            return age;
        }
        int getscore(){
            return score;
        }
        int getisalive(){
            return alive;
        }
        int sethealth(int health){
           this->health = health;
        } 
        int setage(int age){
            this->age = age;
        }
        int setscore(int score){
            this->score = score;
        }
        int setisalive(bool alive){
            this->alive = alive;
        }
}
int main(){
    player harsh, raghv;
    harsh.setage(21);
    harsh.sethealth(70);
    harsh.setscore(100);
    harsh.setisalive(true); 


}
#include<iostream>
using namespace std;

 class Hero{
       
       int health;
       char level;
       public:
       int  getHealth(){
        return health;
       }
       char getLevel(){
        return level;
       }
       void setHealth(int h){
        health=h;
       }
       void setLevel(char ch){
        level=ch;
       }
 };

int main()
{
     Hero h1;
     h1.setHealth(90);
     cout<<"Health is"<<h1.getHealth()<<endl;
     h1.setLevel('A');
     cout<<"Level is"<<h1.getLevel()<<endl;
    return 0;
}
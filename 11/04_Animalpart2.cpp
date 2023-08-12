#include <iostream>
using namespace std;

class Animal
{
protected:
    int happiness;
    int energy;
    int fullness;
    const int MAX_HAPPINESS = 100;
    const int MAX_ENERGY = 100;
    const int MAX_FULLNESS = 100;
    void limitStat();
public:
    Animal(int, int, int);
    int getHappiness();
    int getEnergy();
    int getFullness();
    void eat(int);
    void play(int);
    void sleep(int);
};

class Bird : public Animal
{
public:
    Bird(int, int, int);
    void fly(int);
    void sing();
};

Animal::Animal(int happiness, int energy, int fullness){
    this->happiness = happiness ;
    this->energy = energy ;
    this->fullness = fullness ;
    limitStat();
}

 Bird::Bird(int happiness, int energy, int fullness) 
     :Animal(happiness, energy, fullness){

}
void Bird::fly(int hour){
    if(hour < 0){return;}
    this->energy -= (5*hour);
    limitStat();
}
void Bird::sing(){
    this->happiness += 5;
    limitStat();
}

void Animal::limitStat(){ 
    if(this->happiness > 100){this->happiness = MAX_HAPPINESS;}
    else if(this->happiness < 0){this->happiness = 0;}
    if(this->energy > 100){this->energy = MAX_ENERGY;}
    else if(this->energy < 0){this->energy = 0;}
    if(this->fullness > 100){this->fullness = MAX_FULLNESS;}
    else if(this->fullness < 0){this->fullness = 0;}

}

int Animal::getEnergy(){
    return energy ;
}
int Animal::getHappiness(){
    return happiness;
}
int Animal::getFullness(){
    return fullness ;
}

void Animal::eat(int food ){
    if(food < 0){return;}
    this->fullness += food ;
    if(this->fullness > MAX_FULLNESS){this->happiness -= 10 ;}
    limitStat();
    
}

void Animal::play(int hour){
    //may be for ?
    for(int i = hour ; i > 0 ; i-- ){
        //ถ้าพลังงานหรือความอิ่ม <= 0 จะไม่เล่น
        if((this->energy <= 0)&&(this->fullness <= 0)){break;}
        this->happiness += 5 ;
        this->energy -= 10 ;
        this->fullness -= 20 ;
        limitStat(); 
    } 
}

void Animal::sleep(int hour){
    if(hour < 0){return;}
    this->energy += (hour*10);
    this->fullness -= (hour*10);
    limitStat();
}





int main()
{
}
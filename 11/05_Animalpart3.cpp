#include <iostream>
using namespace std;

class Animal
{
private:
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

class Pet : public Animal
{
private:
    string name;
public:
    Pet(string, int, int, int);
    string getName();
    void setName(string);
};


Animal::Animal(int happiness, int energy, int fullness){
    this->happiness = happiness ;
    this->energy = energy ;
    this->fullness = fullness ;
    limitStat();
}

Pet::Pet(string name , int happiness, int energy, int fullness )
    :Animal(happiness, energy,fullness){
        this->name = name ;
    }

string Pet::getName(){return name ;}

void Pet::setName(string n){this->name = n;}

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
    // Animal dog(80,30,90);
    // dog.eat(90); //full = 100
    // cout << "happy "<< dog.getHappiness() << endl ;
    // dog.eat(10); //100
    // cout << "fullness " << dog.getFullness() << endl;//100
    // cout << "happy "<< dog.getHappiness() << endl ; //happy = 60 ;
    // dog.play(5);
    // cout << "happy "<< dog.getHappiness() << endl ; // happy = 75 ;
    // cout << "fullenss " << dog.getFullness() << endl;//40
    // cout << "energy "<< dog.getEnergy() << endl ; // energy = 0 ;
    // dog.sleep(5);
    // cout << "energy " << dog.getEnergy() << endl;//40
    // cout << "fullenss " << dog.getFullness() << endl;//0

    // Animal cat(0,0,0);
    // cat.play(5);
    // cout << "happy " << cat.getHappiness() << endl;//0
    // cat.eat(120);
    // cout << "fullness " << cat.getFullness() << endl;//100
    // cout << "happy " << cat.getHappiness() << endl;//0
    // cat.sleep(2);//full = 80
    // cout << "fullness " << cat.getFullness() << endl;//80
    // cout << "energy " << cat.getEnergy() << endl;//20
    // cat.play(5);
    // cout << "fullness " << cat.getFullness() << endl;//60
    // cout << "happy " << cat.getHappiness() << endl;//10
    // cout << "energy " << cat.getEnergy() << endl;//0
    // cat.eat(100);
    // cat.sleep(10);
    // cout << "fullness " << cat.getFullness() << endl;//0
    // cout << "energy " << cat.getEnergy() << endl;//100
    // cat.play(5);
    // cout << endl;
    // cout << "fullness " << cat.getFullness() << endl;//0
    // cout << "happy " << cat.getHappiness() << endl;//0
    // cout << "energy " << cat.getEnergy() << endl;//100
    // cat.eat(100);
    // cout << endl;
    // cout << "fullness " << cat.getFullness() << endl;//100
    // cout << "happy " << cat.getHappiness() << endl;//0
    // cout << "energy " << cat.getEnergy() << endl;//100
    // cat.play(10);
    // cout << endl;
    // cout << "fullness " << cat.getFullness() << endl;//0
    // cout << "happy " << cat.getHappiness() << endl;//0
    // cout << "energy " << cat.getEnergy() << endl;//100
    // cat.eat(500);
    // cout << endl;
    // cout << "happy " << cat.getHappiness() << endl;
    // cat.eat(500);
    // cout << endl;
    // cout << "happy " << cat.getHappiness() << endl;
    //  cat.eat(500);
    // cout << endl;
    // cout << "happy " << cat.getHappiness() << endl;
    // cout << "fullness " << cat.getFullness() << endl;
    Animal pig(5,1,0);
    cout << pig.getHappiness() << endl ;
    cout << pig.getEnergy() << endl ;
    cout << pig.getFullness() << endl;
    pig.eat(-10);
    cout << endl ;
    cout << pig.getHappiness() << endl ;
    cout << pig.getEnergy() << endl ;
    cout << pig.getFullness() << endl;
    pig.sleep(22);
    cout << endl ;
    cout << pig.getHappiness() << endl ;
    cout << pig.getEnergy() << endl ;
    cout << pig.getFullness() << endl;

   
    

}
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
    Animal(int happiness, int energy , int fullness )
    {
        this->happiness = happiness;
        this->energy = energy;
        this->fullness = fullness;
    }

    int getHappiness()
    {
        return happiness;
    }

    int getEnergy()
    {
        return energy;
    }

    int getFullness()
    {
        return fullness;
    }

    void eat(int food)
    {
        fullness += food;
        if (fullness > MAX_FULLNESS)
        {
            fullness = MAX_FULLNESS;
            happiness -= 10;
        }
        limitStat();
    }

    void play(int hour)
    {
        if (energy == 0 || fullness == 0)
        {
            return;
        }
        energy -= hour * 10;
        fullness -= hour * 20;
        happiness += hour * 5;
        limitStat();
    }

    void sleep(int hour)
    {
        energy += hour * 10;
        fullness -= hour * 10;
        limitStat();
    }

    
};
void Animal::limitStat(){
    
        if (happiness < 0)
        {
            happiness = 0;
        }
        else if (happiness > MAX_HAPPINESS)
        {
            happiness = MAX_HAPPINESS;
        }

        if (energy < 0)
        {
            energy = 0;
        }
        else if (energy > MAX_ENERGY)
        {
            energy = MAX_ENERGY;
        }

        if (fullness < 0)
        {
            fullness = 0;
        }
        else if (fullness > MAX_FULLNESS)
        {
            fullness = MAX_FULLNESS;
        }
    
}

int main(){
    Animal dog(80,30,90);
    dog.eat(90); //full = 100
    cout << "happy "<< dog.getHappiness() << endl ;
    dog.eat(10); //100
    cout << "fullness " << dog.getFullness() << endl;//100
    cout << "happy "<< dog.getHappiness() << endl ; //happy = 60 ;
    dog.play(5);
    cout << "happy "<< dog.getHappiness() << endl ; // happy = 75 ;
    cout << "fullenss " << dog.getFullness() << endl;//40
    cout << "energy "<< dog.getEnergy() << endl ; // energy = 0 ;
    dog.sleep(5);
    cout << "energy " << dog.getEnergy() << endl;//40
    cout << "fullenss " << dog.getFullness() << endl;//0
}
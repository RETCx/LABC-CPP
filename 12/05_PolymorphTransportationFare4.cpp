#include <iostream>
using namespace std;

class Transportation
{
public:
    
virtual double fare() = 0;
};

class Taxi: public Transportation
{
    private:
        double distance ;
    public:
       void setDistance(double d){
            this->distance = d ;
            }
        double fare(){
            double expenses = 35 ;
            if(distance){expenses +=  (2*distance);}
            return expenses ;
        }

};

class BmtaBus: public Transportation
{
    public:
        double fare(){
            double expenses = 0;
            return expenses += 6.50 ;
        }

};

class BTS: public Transportation
{
    private:
        int station ;
    
    public:
        void setStation(int s){this->station = s;}
        double fare(){
            double expenses = 15;
            return expenses + (station*5);
        }

};

class Passenger
{
    private:
        double totalFare;
    public:
        Passenger() {
        totalFare = 0.0;
        }
        void addTransportation(Transportation &transportation){ //&transportation จะเก็บค่า address ของ class ที่รับมา
            this->totalFare += transportation.fare() ; //address ของ แต่ละ class
        }
        double getTotalFare(){return totalFare;}

};

int main()
{
    Passenger passenger;
    while(1) {
        char transportType;
        cin >> transportType;
        if (transportType == 'A') {
            Taxi *taxi = new Taxi(); //จอง class
            double distance;
            cin >> distance;
            taxi->setDistance(distance); //address ของ class ชี้ไปยัง function นั้น
            passenger.addTransportation(*taxi); //รับ pointer ที่เก็บ address ที่จองมา
        } else if (transportType == 'B') {
            BmtaBus *bus = new BmtaBus();
            passenger.addTransportation(*bus);

        } else if (transportType == 'C') {
            BTS *bts = new BTS();
            int station;
            cin >> station;
            bts->setStation(station);
            passenger.addTransportation(*bts);
            

        } else {
            break;
        }
    }
    cout << "Total Fare: " << passenger.getTotalFare() << endl;
}
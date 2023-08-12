#include <iostream>
#include <cmath>
#include <string>


using namespace std;

class Time
{
    private:
        int hour;
        int minute;
        int second;

    public:
        Time(int hour, int minute, int second){
            this->hour = hour ;
            this->minute = minute;
            this->second = second ;
            if(this->hour >= 24){this->hour = hour%24;}
        }
        Time(int duration){  
            this->hour = duration/3600;
            this->minute = (duration%3600)/60;
            this->second = (duration%3600)%60;
            if(this->hour >= 24){this->hour = hour%24;}
        }
        ////////////////////
        // mutator (set) methods
        void setHour(int h) {hour = h;}

        void setMinute(int m) {minute = m;}

        void setSecond(int s) {second = s;}

        // accessor (get) methods
        int getHour() {return hour;}

        int getMinute() {return minute;}

        int getSecond() {return second;}
        //////////////////

        int getDuration(){return (hour*3600) + (minute*60) + second;}
        
        Time add(Time other){
            int totalSeconds = getDuration() + other.getDuration();
            return Time(totalSeconds);
        }
        
        int subtract(Time other){
            if(getDuration() > other.getDuration()){
                return abs(other.getDuration()-getDuration());
            }
            else{
                return (((24*3600)) -abs(getDuration() - other.getDuration()));
            }
            
        }
        int equals(Time other){
            if (getDuration() == other.getDuration()){
                return 1;
            } 
            return 0 ;
        }

        string toString(){
            string h = to_string(hour) , m = to_string(minute),s = to_string(second) ,ss;
            int l1 = 2 - h.length() ,l2 = 2 - m.length(),l3 = 2 - s.length() ;
            h.insert(0,l1,'0') ; m.insert(0,l2,'0') ;s.insert(0,l3,'0') ; //(index,num,char c)
            return h+ ":" + m + ":" + s ;


        } 
};


int main()
{
    Time a(2,2,2);
    Time b(1,1,1);
    Time T4(0,0,0);
    Time T5(90690);///1:11:30
    Time tf(24,59,0); 
    Time T23(23,59,59);
    cout << T4.getDuration() << endl;
    cout << a.getDuration() << "," << a.subtract(b) << endl; 
    cout << b.subtract(a) << endl; //b-a = 82739
    cout << T4.toString() << endl;
    cout << T23.toString() << endl; 
    cout << T5.toString() << endl; 
    cout << tf.toString() << endl; 
    cout << tf.subtract(T5) << endl; 
   // implement program to test class Time
}
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

class Time{
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
            
            stringstream ss;
            ss << setfill('0') << setw(2) << hour << ":" 
               << setfill('0') << setw(2) << minute << ":"
               << setfill('0') << setw(2) << second ;
            return ss.str() ;
        } 
};
/*The stringstream class is a part of the <sstream> header in C++, and allows you to write and read formatted data to and from strings in a manner similar to how you would with input/output streams like cout and cin.

The setfill() and setw() functions are part of the <iomanip> header, and are used to format output. setfill() sets the character used to pad the output to a fixed width, and setw() sets the width of the output field.

Here's a brief explanation of what this code does:

The stringstream object ss is created.
The setfill() function is used to set the fill character to '0', so that any empty spaces in the output are filled with zeroes.
The setw() function is used to set the output width of each field to 2 characters.
The << operator is used to insert the values of hour, minute, and second into the stringstream object, separated by colons (:).
The str() function is called on the stringstream object to retrieve the resulting string.
For example, if hour is 9, minute is 8, and second is 4, the resulting string will be "09:08:04".*/

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
    cout << tf.add(T23) << endl;
   // implement program to test class Time
}
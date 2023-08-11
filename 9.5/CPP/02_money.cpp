#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    string name  ;
    char salarys[100] ;
    double salary ,moneyall = 0 ,money = 0 , salaryYear = 0 ;
    cin >> name ;
    cin >> salary ;
    for(int i = 0 ; i < 12 ;i++){
        cin >> money ;
        moneyall += (money)*(15.0/100) ;
        salaryYear += salary ;
        
    }
    sprintf(salarys, "%.2f", moneyall + salaryYear);
    cout << name << " " << salarys ;
    ;
}
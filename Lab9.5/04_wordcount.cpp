#include <iostream>
using namespace std;

typedef struct Word_ {
    string data ;
    int count ;

} Word;

int main() {
    string input;
    int i, last_word = 0, find = 0;
    Word data[20];

    while (true) {
        cin >> input;
        if (input == "exit") {
            break;
        }
        find = 0 ;
         for(i = 0 ; i < last_word ; i++){
            if(input == data[i].data){
                    data[i].count += 1 ; find = 1 ; 
                    break;  
            }
        }
        if(!(find)){
            data[last_word].data = input; data[last_word].count = 1 ;
            last_word++ ;
        }

        

    }

    cout << "Output:" << endl;
    for(i=0;i<last_word;i++){
                cout <<data[i].data << " = " << data[i].count << endl;
        }


    return 0;
}
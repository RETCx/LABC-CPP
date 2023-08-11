#include <iostream>
using namespace std ;
int main(){
    int numprisonern = 0 , i = 0  , j ,k = 0, n = 0 ,evenn = 0 , oddn = 0 ;
    cin >> numprisonern ;
    int numprisoner[numprisonern + 1] = {0} ;
    for(i = 0 ; i < numprisonern ; i++){
        cin >> numprisoner[i] ;
        if(numprisoner[i] > n){
            n = numprisoner[i];
        }
    } 
    int allprisoner[n + 1] = {0} , even[n + 1] = {0} ,odd[n + 1] = {0} , missprisoner[n + 1] = {0}  ,sortedprisoner[n] = {0};  
    for(i = 0 ;i < numprisonern ; i++){
        sortedprisoner[ numprisoner[i] - 1] =  numprisoner[i] ;
    }
    for(i = 0 ,j = 0 ; sortedprisoner[i] != n ; i++ ,j++ ){
        if(sortedprisoner[i] == 0){
            missprisoner[k] = (j + 1) ; k++ ;
        }
        

    }
    for(i = 0 ; missprisoner[i] != 0 ; i++){
        if((missprisoner[i]%2)){
            cout << missprisoner[i] << " " ;   
        }
    }
    cout << endl ;
    for(i = 0 ; missprisoner[i] != 0 ; i++){
        if(!(missprisoner[i]%2)){
            cout << missprisoner[i] << " " ;   
        }
    }
}
#include <iostream>
#include <string>
using namespace std;
class MusicPlaylist{
    private:
        string Playlist[20];
        int order ;


    public:
        void add(string song){
            int i  ;
            for(i = 0 ; Playlist[i] != "" ; i++ );
            this->Playlist[i] = song ;
        }

        int setCurrentTrack(int order){
            this->order = order ;
            return order - 1 ;
        }
        string play(){
            return Playlist[setCurrentTrack(order)] ;
        }
};


int main()
{
    MusicPlaylist mp;
    mp.add("Shape of You");
    mp.add("That's What I Like");
    mp.add("Humble");
    mp.setCurrentTrack(2);
    cout << mp.play() << endl; // แสดงเพลงลำดับที่ 1 คือ Shape of You
}
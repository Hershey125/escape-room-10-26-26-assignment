//The map has a wall of # characters all the way around its edge. More # characters are distributed around the inside of the map, and they act as walls too.
// The @ starts on an open space. After each move, the program draws the whole map again with the @ in its new place.
#ifndef ROOM_H
#define ROOM_H
using namespace std;

class Player;

class Room{

    private:
        Player * player;
        int width;
        int height;
        char ** map;
       
        //TODO: what type should the map be? probably some kind of array of type char
    
    public:
        Room(int x, int y, Player*player); //allocate the map
        ~Room(); //deallocate the map
        void draw();
        //char tileAt(int x, int y);
        bool canMove(int x, int y);
};

#endif
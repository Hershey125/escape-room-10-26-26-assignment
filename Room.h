//The map has a wall of # characters all the way around its edge. More # characters are distributed around the inside of the map, and they act as walls too.
// The @ starts on an open space. After each move, the program draws the whole map again with the @ in its new place.
#include "Player.h"
using namespace std;

class Room{

    private:
        //Player * player;
        char ** map;
        int width;
        int height;
        //TODO: what type should the map be? probably some kind of array of type char
    
    public:
        Room(int x, int y); //allocate the map
        ~Room(); //deallocate the map
        void draw();
};
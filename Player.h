#ifndef PLAYER_H
#define PLAYER_H


class Room;
class Player{


    private:
    int x;
    int y;
    
    public:
    Player();
    ~Player();
        bool move(char direction, Room* room);
};

#endif
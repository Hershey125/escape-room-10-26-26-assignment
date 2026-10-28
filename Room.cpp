#include "Room.h"
using namespace std;
#include <iostream>

Room::Room(int x, int y, Player* player){
    this->player = player;
    this->width = x;
    this->height = y;
    
    this->map = new char*[y];
    

    for(int outercounter=0; outercounter<y; outercounter++ ){
        this->map[outercounter] = new char[x];
        for(int innerCounter=0; innerCounter <x; innerCounter++){
            if(outercounter == 0|| outercounter == (y-1) || innerCounter == 0 || innerCounter == (x-1)){
            this->map[outercounter][innerCounter] = '#';}
            else{
                this->map[outercounter][innerCounter] = ' ';
            }
        }
    }
}

Room::~Room(){};

bool Room::canMove(int x, int y){
    if(map[y][x] != '#'){
        return true;
    }else{
        return false;
    }
}

void Room::draw(){
    for(int outercounter=0; outercounter<height; outercounter++ ){
        for(int innerCounter=0; innerCounter <width; innerCounter++){
            cout << this->map[outercounter][innerCounter];
        }
        cout << endl;


    }
}
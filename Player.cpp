#include "Player.h"
#include "Room.h"


Player::Player(){
    this->x = 3;
    this->y= 3;
}
Player::~Player(){

}
bool Player::move(char direction, Room * room){
    if(direction == 'w'){
        if(room->canMove(this->x, this->y-1)){
            this->y -= 1;
            return true;
        }
        
    }else if(direction == 'a'){
            if(room->canMove(this->x-1, this->y)){
            this->x -= 1;
            return true;
        }
    }else if(direction == 'd'){
        if(room->canMove(this->x+1, this->y)){
            this->x += 1;
            return true;
        }
    }else if(direction == 's'){
            if(room->canMove(this->x, this->y+1)){
            this->y += 1;
            return true;
        }
    }else{
        return false;
    }
}
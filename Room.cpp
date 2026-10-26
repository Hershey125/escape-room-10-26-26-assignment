#include "Room.h"
using namespace std;

Room::Room(int x, int y){
    this->width = x;
    this->height = y;
    
    this->map = new char [x][y];
    

    for(int outercounter=0; outercounter<y; outercounter++ ){
        //this->map[outercounter] = new char[x];
        for(int innerCounter=0; innerCounter <x; innerCounter++){
            if(outercounter == 0|| outercounter == (y-1) || innerCounter == 0 || innerCounter == (x-1)){
            this->map[outercounter][innerCounter] = '#';}
            else{
                this->map[outercounter][innerCounter] = ' ';
            }
        }
    }
}

Room::~Room(){

}

void Room::draw(){
    for(int outercounter=0; outercounter<y; outercounter++ ){
        for(int innerCounter=0; innerCounter <x; innerCounter++){
            cout << this->map[outercounter][innerCounter]; 
        }
        cout << endl;


    }
}
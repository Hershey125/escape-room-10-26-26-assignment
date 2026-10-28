#include <iostream>
#include "Room.h"
#include "Player.h"
using namespace std;



int main(){
    //TO DO: When the program starts, it asks the user how big the map should be: a number of rows and a number of columns.
Player player;
Room room(20,10, &player);

    bool isRunning = true;
    while(isRunning){
        room.draw();
            char input;
            cout<< endl << endl << endl<<"Please use the wasd keys to move or press q to quit";
            cin >> input;
            if(input == 'q'){
                isRunning = false;
            }else{
                player.move(input, &room);
            }
    }
    return 0;
}
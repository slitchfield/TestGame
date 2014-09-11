/* Player.hpp
 * Header file for player class
 */

#ifndef __PLAYER_INCLUDED__
#define __PLAYER_INCLUDED__

#include <string>
#include <vector>
#include "item.hpp"
#include "room.hpp"

class Player{

  public:
    Player();
    void setName(std::string);
    std::string getName();
    Room* getRoom();
    void setRoom(Room*);
    
  private:
    std::string Name;
    std::vector<Item>* Inv;
    Room* currentRoom;
    
};

#endif

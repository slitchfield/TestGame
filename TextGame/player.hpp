/* Player.hpp
 * Header file for player class
 */

#ifndef __PLAYER_INCLUDED__
#define __PLAYER_INCLUDED__

#include <string>
#include <vector>
#include "item.hpp"

class Player{

  public:
    Player();
    void setName(std::string);
    
  private:
    std::string Name;
    std::vector<Item> Inv;
    
};

#endif

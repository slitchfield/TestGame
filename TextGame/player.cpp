#include "player.hpp"

Player::Player(){
  
}

void Player::setName(std::string str){
  this->Name = str;
}

std::string Player::getName(){
  return this->Name;
}


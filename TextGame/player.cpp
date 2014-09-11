#include "player.hpp"

Player::Player(){
  this->Inv = new std::vector<Item>; 
}

void Player::setName(std::string str){
  this->Name = str;
}

std::string Player::getName(){
  return this->Name;
}

Room* Player::getRoom(){
  return this->currentRoom;
}

void Player::setRoom(Room* room){
  this->currentRoom = room;
}

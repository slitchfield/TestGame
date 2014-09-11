/* Text Game
 * author: Samuel Litchfield
 *
 * main version 0.0001
 */

#include <iostream>
#include <string>
#include "player.hpp"
#include "item.hpp"

int main(int argc, char** argv){

  Player* player = new Player();

  std::cout << "/**************************\\" << std::endl;
  std::cout << "| THIS IS A TEXT GAMEEEEEE |"  << std::endl;
  std::cout << "\\**************************/" << std::endl;

  std::cout << std::endl << "Please enter your name: ";

  std::string temp;
  std::cin >> temp;
  
  player->setName(temp);

  std::cout << "Congratulations, " << player->getName() << ". You're fucked." << std::endl;


}

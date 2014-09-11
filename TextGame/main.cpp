/* Text Game
 * author: Samuel Litchfield
 *
 * main version 0.0001
 */

#include <iostream>
#include <string>

#include "player.hpp"
#include "room.hpp"
#include "item.hpp"
//#include "utility.hpp"

void printTitle(){

  std::cout << "/******************************************************************************\\\n" \
"| This is a text game! It uses 80 columns.                                     |\n" \
"\\******************************************************************************/"\
  << std::endl;
}

int main(int argc, char** argv){

  Player* player = new Player();

  printTitle();
  
  std::cout << std::endl << "Please enter your name: ";

  std::string temp;
  std::cin >> temp;
  
  player->setName(temp);

  std::cout << "Congratulations, " << player->getName() << ". You're fucked." << std::endl;

  Room* current = new Room();

  std::cout << std::endl;

  current->draw();

}

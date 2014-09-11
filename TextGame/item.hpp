/* item.hpp
 * defines class for items
 */

#ifndef __ITEM_DEFINED__
#define __ITEM_DEFINED__

#include <string>

class Item{

  public:
    Item();
    void setName(std::string);

  private: 
    std::string Name;

};

#endif

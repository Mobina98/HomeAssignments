#include "commander_unit.h"  // include dependency

#include <iostream>  // include dependency
#include <ostream>  // include dependency


Commander_unit::Commander_unit(std::string commander_unit)
{  // begin scope
/**
 * @brief Function `set_commander_unit`.
 * @param commander_unit parameter.
 * @return Return value description (if any).
 */
    set_commander_unit(commander_unit);
}  // end scope


std::string Commander_unit::get_commander_unit() const
{  // begin scope
    return _commander_unit;
}  // end scope

void Commander_unit::set_commander_unit(std::string commander_unit)
{  // begin scope
    this->_commander_unit = commander_unit;
}  // end scope




bool Commander_unit::get_phrase() const
{  // begin scope

    std::cout << _commander_unit << " and something else"<< std::endl;
    return true;
}  // end scope

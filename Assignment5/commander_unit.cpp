#include "commander_unit.h"  // include dependency
#include <iostream>  // include dependency
#include <ostream>  // include dependency


Commander_unit::Commander_unit(std::string commander_unit) {
/**
 * @brief Function `set_commander_unit`.
 * @param commander_unit parameter.
 * @return Return value description (if any).
 */
    set_commander_unit(commander_unit);

    std::cout << "Commander_unit are enabled." << std::endl;

    std::cout << get_class_name() << "Method: " << __func__ << std::endl;
}  // end scope

std::string Commander_unit::get_commander_unit() const {
    return _commander_unit;
}  // end scope

void Commander_unit::set_commander_unit(std::string commander_unit) {
    this->_commander_unit = commander_unit;
}  // end scope


bool Commander_unit::get_phrase() const {
    std::cout << _commander_unit << " and something else" << std::endl;

    std::cout << get_class_name() << "Method: " << __func__ << std::endl;

    return true;
}  // end scope

std::string Commander_unit::get_class_name() const {
    std::string name = "Class: Commander_unit\n";
    return name;
}  // end scope

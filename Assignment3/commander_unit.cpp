#include "commander_unit.h"

#include <iostream>
#include <ostream>

// Definition of the Commander_unit class constructor
// Takes a string parameter 'commander_unit' (e.g., "English", "Russian")
// Calls the set_commander_unit method to initialize the _commander_unit member variable
Commander_unit::Commander_unit(std::string commander_unit) {
    set_commander_unit(commander_unit);
}

// Definition of the get_commander_unit() getter method
// 'const' means this method does not modify the object's state
// Returns the value of the private _commander_unit member variable
std::string Commander_unit::get_commander_unit() const {
    return _commander_unit;
}

// Definition of the set_commander_unit() setter method
// Takes a string parameter 'commander_unit' to set a new value
// Assigns the value of the parameter 'commander_unit' to the member variable '_commander_unit'
// 'this->' explicitly refers to the current object's member, distinguishing it from the parameter name
void Commander_unit::set_commander_unit(std::string commander_unit) {
    this->_commander_unit = commander_unit;
}

// Definition of the get_phrase() action method
// 'const' means this method does not modify the object's state
// Prints the current commander_unit/language followed by a generic phrase to the console
bool Commander_unit::get_phrase() const {
    std::cout << _commander_unit << " and something else" << std::endl;
    return true;
}

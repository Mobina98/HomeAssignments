#include <iostream>
#include "support_unit.h"


// Support_unit constructor - inherits from Elite_unit class
Support_unit::Support_unit(const std::string &name, const std::string &fraction, const int &health, const std::string &weapon_type,
             const int &damage, const int &ammo, const int &move_speed): Elite_unit(name, fraction, health, weapon_type,
    damage, ammo, move_speed) {
    
    // Set all character attributes
    set_name(name);
    set_health(health);
    set_weapon_type(weapon_type);
    set_damage(damage);
    set_ammo(ammo);
    set_move_speed(move_speed);
    set_fraction(fraction);
    set_support_unitines(100);       // Start with 100 support_unital supplies
    set_points_to_ulta(0);    // Ultimate ability starts at 0 points
}

// Attempts to heal (always returns true in this implementation)
bool Support_unit::heal() const {
    std::cout << get_name() << " use support_unitines to heal" << std::endl;

    return true;
}

// Activates the support_unit's ultimate ability
bool Support_unit::ultimate() {
    std::cout << get_name() << "returns to alive" << std::endl;
    return true;
}

// Returns current support_unitine count
unsigned int Support_unit::get_support_unitines() const {
    return _support_unitines;
}

// Updates support_unitine supply
void Support_unit::set_support_unitines(unsigned int support_unitines) {
    _support_unitines = support_unitines;
}

// Returns points needed for ultimate
unsigned int Support_unit::get_points_to_ulta() const {
    return _points_to_ulta;
}

// Sets ultimate ability progress
void Support_unit::set_points_to_ulta(unsigned int points_to_ulta) {
    _points_to_ulta = points_to_ulta;
}

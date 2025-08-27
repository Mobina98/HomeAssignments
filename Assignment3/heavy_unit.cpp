#include <iostream>
#include "heavy_unit.h"

// Constructor: Initializes a Heavy_unit (a type of Elite_unit)
// Takes name, fraction, health, weapon_type, damage, ammo, and move_speed as parameters
// Calls parent class (Elite_unit) constructor
Heavy_unit::Heavy_unit(const std::string &name, const std::string &fraction, const int &health,
                     const std::string &weapon_type,
                     const int &damage, const int &ammo, const int &move_speed): Elite_unit(
    name, fraction, health, weapon_type, damage, ammo, move_speed) {
    set_name(name);
    set_health(health);
    set_weapon_type(weapon_type);
    set_damage(damage);
    set_ammo(ammo);
    set_move_speed(move_speed);
    set_fraction(fraction);
    set_stablization(100);
    set_points_to_ulta(0);
    std::cout << name << " was created" << std::endl;
}


// Simulates aiming the weapon at a target
bool Heavy_unit::guide_gun() {
    std::cout << get_name() << " adjusts the weapon to the target" << std::endl;
    return true;
}

// Triggers the ultimate ability
bool Heavy_unit::ultimate() {
    std::cout << get_name() << "loads a 'baby' bomb into a bazooka" << std::endl;
    return true;
}

// Returns current stabilization
unsigned int Heavy_unit::get_stabilization() const {
    return _stabilization;
}

// Sets stabilization value
void Heavy_unit::set_stablization(unsigned int stabilization) {
    this->_stabilization = stabilization;
}

// Returns points needed to activate ultimate
unsigned int Heavy_unit::get_points_to_ulta() const {
    return _points_to_ulta;
}

// Sets points required for ultimate
void Heavy_unit::set_points_to_ulta(unsigned int points_to_ulta) {
    this->_points_to_ulta = points_to_ulta;
}

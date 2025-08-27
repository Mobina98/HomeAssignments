#include <iostream>
#include "elite_unit.h"
#include "assault_unit.h"

Assault_unit::Assault_unit(const std::string &name, const std::string &fraction, const int &health,
                 const std::string &weapon_type, const int &damage, const
                 int &ammo, const int &move_speed): Elite_unit(name, fraction, health, weapon_type, damage, ammo,move_speed) {
    
    // Set all attributes using setter methods for proper initialization
    set_name(name);
    set_health(health);
    set_weapon_type(weapon_type);
    set_damage(damage);
    set_ammo(ammo);
    set_move_speed(move_speed);
    set_fraction(fraction);
    set_rage(0);
    set_points_to_ulta(0);
}


// Method for the Assault_unit to defend (possibly reduces incoming damage)
// Returns true to indicate successful defense action 
bool Assault_unit::defend() {
    std::cout << get_name() << " defends" << std::endl;

    return true;
}


// Method for the Assault_unit to use their ultimate ability
bool Assault_unit::ultimate() {
    std::cout << get_name() << " take a second riffle" << std::endl;

    return true;
}


// Getter for the Assault_unit's current rage level 
unsigned int Assault_unit::get_rage() {
    return _rage;  // Returns the private _rage member variable  
}

// Setter for the Assault_unit's rage level 
void Assault_unit::set_rage(unsigned int rage) {
    this->_rage = rage;  // Updates the private _rage member variable
}

// Getter for the Assault_unit's current ultimate ability points  
unsigned int Assault_unit::get_points_to_ulta() {
    return _points_to_ulta;
}

// Setter for the Assault_unit's ultimate ability points
void Assault_unit::set_points_to_ulta(unsigned int points_to_ulta) {
    this->_points_to_ulta = points_to_ulta;  // Updates the private _points_to_ulta member variable  
}

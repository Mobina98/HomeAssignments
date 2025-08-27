#include <iostream>
#include "marksman_unit.h"
#include "elite_unit.h"


Marksman_unit::Marksman_unit(const std::string &name, const std::string &fraction, const int &health, const std::string &weapon_type,
               const int &damage, const int &ammo, const int &move_speed): Elite_unit(
    name, fraction, health, weapon_type, damage, ammo,
    move_speed) {
    set_name(name);
    set_health(health);
    set_weapon_type(weapon_type);
    set_damage(damage);
    set_ammo(ammo);
    set_move_speed(move_speed);
    set_fraction(fraction);
    set_mind_control(70);
    set_points_to_ulta(0);
}


// Activates marksman_unit scope (zooms in for precise shots)  
// Returns true if successful
bool Marksman_unit::scope() {
    std::cout << "Marksman_unit use scope" << std::endl;
    return true;
}

// Enables camouflage (reduces enemy detection range)
bool Marksman_unit::hide() {
    std::cout << "Marksman_unit use camouflage" << std::endl;
    return true;
}

// Ultimate ability: Headshot (high-damage precision shot)  
// Overrides Elite_unit/Assault_unit's ultimate (polymorphism)
bool Marksman_unit::ultimate() {
    std::cout << get_name() << " take a breath and shoot headshot" << std::endl;
    return true;
}

// Returns current "mind control" value
unsigned int Marksman_unit::get_mind_control() {
    return _mind_control;
}

// Updates mind control
void Marksman_unit::set_mind_control(unsigned int mind_control) {
    this->_mind_control = mind_control;
}

// Returns ultimate charge progress
unsigned int Marksman_unit::get_points_to_ulta() {
    return _points_to_ulta;
}

// Sets ultimate charge
void Marksman_unit::set_points_to_ulta(unsigned int points_to_ulta) {
    this->_points_to_ulta = points_to_ulta;
}

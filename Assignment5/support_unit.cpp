#include <iostream>  // include dependency
#include "support_unit.h"  // include dependency


Support_unit::Support_unit(const std::string &name, const std::string &fraction, const int &health, const std::string &weapon_type,
             const int &damage, const int &ammo, const int &move_speed): Elite_unit(name, fraction, health, weapon_type,
    damage, ammo, move_speed) {
/**
 * @brief Function `set_name`.
 * @param name parameter.
 * @return Return value description (if any).
 */
    set_name(name);
/**
 * @brief Function `set_health`.
 * @param health parameter.
 * @return Return value description (if any).
 */
    set_health(health);
/**
 * @brief Function `set_weapon_type`.
 * @param weapon_type parameter.
 * @return Return value description (if any).
 */
    set_weapon_type(weapon_type);
/**
 * @brief Function `set_damage`.
 * @param damage parameter.
 * @return Return value description (if any).
 */
    set_damage(damage);
/**
 * @brief Function `set_ammo`.
 * @param ammo parameter.
 * @return Return value description (if any).
 */
    set_ammo(ammo);
/**
 * @brief Function `set_move_speed`.
 * @param move_speed parameter.
 * @return Return value description (if any).
 */
    set_move_speed(move_speed);
/**
 * @brief Function `set_fraction`.
 * @param fraction parameter.
 * @return Return value description (if any).
 */
    set_fraction(fraction);
/**
 * @brief Function `set_support_unitines`.
 * @param 100 parameter.
 * @return Return value description (if any).
 */
    set_support_unitines(100);
/**
 * @brief Function `set_points_to_ulta`.
 * @param 0 parameter.
 * @return Return value description (if any).
 */
    set_points_to_ulta(0);
}  // end scope

bool Support_unit::heal() const {
    std::cout << get_name() << " use support_unitines to heal" << std::endl;

    std::cout << get_class_name() << " Method: " << __func__ << std::endl;

    return true;
}  // end scope

bool Support_unit::ultimate() {
    std::cout << get_name() << "returns to alive" << std::endl;

    std::cout << get_class_name() << " Method: " << __func__ << std::endl;

    return true;
}  // end scope

bool Support_unit::attack() const {
    std::cout << get_name() << "punch with uppercut" << std::endl;

    std::cout << get_class_name() << " Method: " << __func__ << std::endl;

    return true;
}  // end scope

unsigned int Support_unit::get_support_unitines() const {
    return _support_unitines;
}  // end scope

void Support_unit::set_support_unitines(unsigned int support_unitines) {
    _support_unitines = support_unitines;
}  // end scope

unsigned int Support_unit::get_points_to_ulta() const {
    return _points_to_ulta;
}  // end scope

void Support_unit::set_points_to_ulta(unsigned int points_to_ulta) {
    _points_to_ulta = points_to_ulta;
}  // end scope

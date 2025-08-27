#include <iostream>  // include dependency
#include "heavy_unit.h"  // include dependency

Heavy_unit::Heavy_unit(const std::string &name, const std::string &fraction, const int &health,
                     const std::string &weapon_type, const int &damage, const int &ammo, const int &move_speed)
    : Elite_unit(name, fraction, health, weapon_type, damage, ammo, move_speed)
{  // begin scope
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
 * @brief Function `set_stabilization`.
 * @param 100 parameter.
 * @return Return value description (if any).
 */
    set_stabilization(100);
/**
 * @brief Function `set_points_to_ulta`.
 * @param 0 parameter.
 * @return Return value description (if any).
 */
    set_points_to_ulta(0);
    std::cout << name << " was created" << std::endl;
}  // end scope

bool Heavy_unit::guide_gun()
{  // begin scope
    std::cout << get_name() << " adjusts the weapon to the target" << std::endl;
    return true;
}  // end scope

bool Heavy_unit::ultimate()
{  // begin scope
    std::cout << get_name() << " loads a 'baby' bomb into a bazooka" << std::endl;
    return true;
}  // end scope

unsigned int Heavy_unit::get_stabilization() const
{  // begin scope
    return _stabilization;
}  // end scope

void Heavy_unit::set_stabilization(unsigned int stabilization)
{  // begin scope
    this->_stabilization = stabilization;
}  // end scope

unsigned int Heavy_unit::get_points_to_ulta() const
{  // begin scope
    return _points_to_ulta;
}  // end scope

void Heavy_unit::set_points_to_ulta(unsigned int points_to_ulta)
{  // begin scope
    this->_points_to_ulta = points_to_ulta;
}  // end scope
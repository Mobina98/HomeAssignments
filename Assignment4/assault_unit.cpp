#include <iostream>  // include dependency
#include "elite_unit.h"  // include dependency
#include "assault_unit.h"  // include dependency

Assault_unit::Assault_unit(const std::string &name, const std::string &fraction, const int &health,
                 const std::string &weapon_type, const int &damage, const
                 int &ammo, const int &move_speed): Elite_unit(name, fraction, health, weapon_type, damage, ammo,
                             move_speed)
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
 * @brief Function `set_rage`.
 * @param 0 parameter.
 * @return Return value description (if any).
 */
    set_rage(0);
/**
 * @brief Function `set_points_to_ulta`.
 * @param 0 parameter.
 * @return Return value description (if any).
 */
    set_points_to_ulta(0);
}  // end scope


bool Assault_unit::defend()
{  // begin scope
    std::cout << get_name() << " defends" << std::endl;

    return true;
}  // end scope


bool Assault_unit::ultimate()
{  // begin scope
    std::cout << get_name() << " take a second riffle" << std::endl;

    return true;
}  // end scope


unsigned int Assault_unit::get_rage()
{  // begin scope
    return _rage;
}  // end scope

void Assault_unit::set_rage(unsigned int rage)
{  // begin scope
    this->_rage = rage;
}  // end scope

unsigned int Assault_unit::get_points_to_ulta()
{  // begin scope
    return _points_to_ulta;
}  // end scope

void Assault_unit::set_points_to_ulta(unsigned int points_to_ulta)
{  // begin scope
    this->_points_to_ulta = points_to_ulta;
}  // end scope

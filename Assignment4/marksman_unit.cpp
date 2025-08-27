#include <iostream>  // include dependency
#include "marksman_unit.h"  // include dependency
#include "elite_unit.h"  // include dependency


Marksman_unit::Marksman_unit(const std::string &name, const std::string &fraction, const int &health, const std::string &weapon_type,
               const int &damage, const int &ammo, const int &move_speed): Elite_unit(
                       name, fraction, health, weapon_type, damage, ammo,
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
 * @brief Function `set_mind_control`.
 * @param 70 parameter.
 * @return Return value description (if any).
 */
    set_mind_control(70);
/**
 * @brief Function `set_points_to_ulta`.
 * @param 0 parameter.
 * @return Return value description (if any).
 */
    set_points_to_ulta(0);

}  // end scope


bool Marksman_unit::scope()
{  // begin scope
    std::cout << "Marksman_unit use scope" << std::endl;
    return true;
}  // end scope

bool Marksman_unit::hide()
{  // begin scope
    std::cout << "Marksman_unit use camouflage" << std::endl;
    return true;
}  // end scope

bool Marksman_unit::ultimate()
{  // begin scope
    std::cout << get_name() <<" take a breath and shoot headshot" << std::endl;
    return true;
}  // end scope

unsigned int Marksman_unit::get_mind_control()
{  // begin scope
    return _mind_control;
}  // end scope

void Marksman_unit::set_mind_control(unsigned int mind_control)
{  // begin scope
    this->_mind_control = mind_control;
}  // end scope

unsigned int Marksman_unit::get_points_to_ulta()
{  // begin scope
    return _points_to_ulta;
}  // end scope

void Marksman_unit::set_points_to_ulta(unsigned int points_to_ulta)
{  // begin scope
    this->_points_to_ulta = points_to_ulta;
}  // end scope

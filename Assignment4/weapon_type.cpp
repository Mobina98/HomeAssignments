#include <iostream>  // include dependency
#include "weapon_type.h"  // include dependency

std::string Gun::get_weapon_type() const
{  // begin scope
    return _weapon_type;
}  // end scope

void Gun::set_weapon_type(std::string weapon_type)
{  // begin scope
    _weapon_type = std::move(weapon_type);
}  // end scope

unsigned int Gun::get_ammo() const
{  // begin scope
    return _ammo;
}  // end scope

void Gun::set_ammo(const unsigned int ammo)
{  // begin scope
    _ammo = ammo;
}  // end scope

unsigned int Gun::get_damage() const
{  // begin scope
    return _damage;
}  // end scope

void Gun::set_damage(const unsigned int damage)
{  // begin scope
    _damage = damage;
}  // end scope

Gun::Gun(const std::string &weapon_type, const unsigned int &damage, const unsigned int &ammo)
{  // begin scope
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
    std::cout << "Gun was created\n";
}  // end scope

AKM::AKM(const std::string &name, const unsigned int &damage, const unsigned int &ammo) : Gun(name, damage, ammo) 
{  // begin scope
/**
 * @brief Function `set_weapon_type`.
 * @param name parameter.
 * @return Return value description (if any).
 */
    set_weapon_type(name);
/**
 * @brief Function `set_ammo`.
 * @param ammo parameter.
 * @return Return value description (if any).
 */
    set_ammo(ammo);
/**
 * @brief Function `set_damage`.
 * @param damage parameter.
 * @return Return value description (if any).
 */
    set_damage(damage);
}  // end scope

AWP::AWP(const std::string &name, const unsigned int &damage, const unsigned int &ammo) : Gun(name, damage, ammo) 
{  // begin scope
/**
 * @brief Function `set_weapon_type`.
 * @param name parameter.
 * @return Return value description (if any).
 */
    set_weapon_type(name);
/**
 * @brief Function `set_ammo`.
 * @param ammo parameter.
 * @return Return value description (if any).
 */
    set_ammo(ammo);
/**
 * @brief Function `set_damage`.
 * @param damage parameter.
 * @return Return value description (if any).
 */
    set_damage(damage);
}  // end scope

Bazooka::Bazooka(const std::string &name, const unsigned int &damage, const unsigned int &ammo) : Gun(name, damage, ammo)
{  // begin scope
/**
 * @brief Function `set_weapon_type`.
 * @param name parameter.
 * @return Return value description (if any).
 */
    set_weapon_type(name);
/**
 * @brief Function `set_ammo`.
 * @param ammo parameter.
 * @return Return value description (if any).
 */
    set_ammo(ammo);
/**
 * @brief Function `set_damage`.
 * @param damage parameter.
 * @return Return value description (if any).
 */
    set_damage(damage);
}  // end scope

Arm::Arm(const std::string &name, const unsigned int &damage, const unsigned int &ammo) : Gun(name, damage, ammo)
{  // begin scope
/**
 * @brief Function `set_weapon_type`.
 * @param name parameter.
 * @return Return value description (if any).
 */
    set_weapon_type(name);
/**
 * @brief Function `set_ammo`.
 * @param ammo parameter.
 * @return Return value description (if any).
 */
    set_ammo(ammo);
/**
 * @brief Function `set_damage`.
 * @param damage parameter.
 * @return Return value description (if any).
 */
    set_damage(damage);
}  // end scope
#include <iostream>  // include dependency
#include "weapon_type.h"  // include dependency

std::string Gun::get_weapon_type() const {
    return _weapon_type;
}  // end scope

void Gun::set_weapon_type(std::string weapon_type) {
    _weapon_type = std::move(weapon_type);
}  // end scope

unsigned int Gun::get_ammo() const {
    return _ammo;
}  // end scope

void Gun::set_ammo(const unsigned int ammo) {
    _ammo = ammo;
}  // end scope

unsigned int Gun::get_damage() const {
    return _damage;
}  // end scope

void Gun::set_damage(const unsigned int damage) {
    _damage = damage;
}  // end scope

Gun::Gun(const std::string &weapon_type, const unsigned int &damage, const unsigned int &ammo) {
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

AKM::AKM(const std::string &name, const unsigned int &damage, const unsigned int &ammo): Gun(name, damage, ammo) {
/**
 * @brief Function `set_weapon_type`.
 * @param name parameter.
 * @return Return value description (if any).
 */
    set_weapon_type(name);
/**
 * @brief Function `set_ammo`.
 * @param damage parameter.
 * @return Return value description (if any).
 */
    set_ammo(damage);
/**
 * @brief Function `set_damage`.
 * @param ammo parameter.
 * @return Return value description (if any).
 */
    set_damage(ammo);
}  // end scope

AWP::AWP(const std::string &name, const unsigned int &damage, const unsigned int &ammo): Gun(name, damage, ammo) {
/**
 * @brief Function `set_weapon_type`.
 * @param name parameter.
 * @return Return value description (if any).
 */
    set_weapon_type(name);
/**
 * @brief Function `set_ammo`.
 * @param damage parameter.
 * @return Return value description (if any).
 */
    set_ammo(damage);
/**
 * @brief Function `set_damage`.
 * @param ammo parameter.
 * @return Return value description (if any).
 */
    set_damage(ammo);
}  // end scope

HeavyUnit::HeavyUnit(const std::string &name, const unsigned int &damage,
                 const unsigned int &ammo): Gun(name, damage, ammo) {
/**
 * @brief Function `set_weapon_type`.
 * @param name parameter.
 * @return Return value description (if any).
 */
    set_weapon_type(name);
/**
 * @brief Function `set_ammo`.
 * @param damage parameter.
 * @return Return value description (if any).
 */
    set_ammo(damage);
/**
 * @brief Function `set_damage`.
 * @param ammo parameter.
 * @return Return value description (if any).
 */
    set_damage(ammo);
}  // end scope

Arm::Arm(const std::string &name, const unsigned int &damage, const unsigned int &ammo): Gun(name, damage, ammo) {
/**
 * @brief Function `set_weapon_type`.
 * @param name parameter.
 * @return Return value description (if any).
 */
    set_weapon_type(name);
/**
 * @brief Function `set_ammo`.
 * @param damage parameter.
 * @return Return value description (if any).
 */
    set_ammo(damage);
/**
 * @brief Function `set_damage`.
 * @param ammo parameter.
 * @return Return value description (if any).
 */
    set_damage(ammo);
}  // end scope

std::string Gun::get_class_name() const {
    std::string name = "Class: Gun\n";
    return name;
}  // end scope

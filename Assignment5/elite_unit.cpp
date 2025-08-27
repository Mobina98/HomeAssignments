#include <iostream>  // include dependency
#include "elite_unit.h"  // include dependency
#include "commander_unit.h"  // include dependency


Elite_unit::Elite_unit(const std::string &name, const std::string &fraction, const int &health,
                         const std::string &weapon_type, const int &damage, const
                         int &ammo, const int &move_speed, const Commander_unit &commander_unit) {
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
    _commander_unit = new Commander_unit(commander_unit);
    std::cout << name << " was created" << std::endl;
    std::cout << get_class_name() << " Method: " << __func__ << std::endl;
}  // end scope


Elite_unit::Elite_unit(const std::string &name, const std::string &fraction, const int &health,
                         const std::string &weapon_type, const int &damage, const
                         int &ammo, const int &move_speed) {
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
    _commander_unit = nullptr;
    std::cout << name << " was created" << std::endl;
    std::cout << get_class_name() << " Method: " << __func__ << std::endl;
}  // end scope


Elite_unit::~Elite_unit() {
    delete _commander_unit;
    _commander_unit = nullptr;
    std::cout << get_name() << " was destroyed" << std::endl;

    std::cout << get_class_name() << " Method: " << __func__ << std::endl;
}  // end scope

std::string Elite_unit::get_name() const {
    return _name;
}  // end scope

void Elite_unit::set_name(std::string name) {
    _name = std::move(name);
}  // end scope

unsigned int Elite_unit::get_health() const {
    return _health;
}  // end scope

void Elite_unit::set_health(unsigned int health) {
    _health = health;
}  // end scope

std::string Elite_unit::get_weapon_type() const {
    return _weapon_type;
}  // end scope

void Elite_unit::set_weapon_type(std::string weapon_type) {
    _weapon_type = std::move(weapon_type);
}  // end scope

unsigned int Elite_unit::get_damage() const {
    return _damage;
}  // end scope

void Elite_unit::set_damage(unsigned int damage) {
    _damage = damage;
}  // end scope

unsigned int Elite_unit::move_speed() const {
    return _move_speed;
}  // end scope

void Elite_unit::set_move_speed(unsigned int move_speed) {
    _move_speed = move_speed;
}  // end scope

unsigned int Elite_unit::get_ammo() const {
    return _ammo;
}  // end scope

void Elite_unit::set_ammo(unsigned int ammo) {
    _ammo = ammo;
}  // end scope

std::string Elite_unit::get_fraction() const {
    return _fraction;
}  // end scope


void Elite_unit::set_fraction(std::string fraction) {
    _fraction = std::move(fraction);
}  // end scope

Commander_unit *Elite_unit::get_commander_unit() const {
    return _commander_unit;
}  // end scope

void Elite_unit::set_commander_unit(const Commander_unit &commander_unit) {
/**
 * @brief Function `if`.
 * @param nullptr parameter.
 * @return Return value description (if any).
 */
    if (_commander_unit != nullptr) {  // conditional branch
        *_commander_unit = commander_unit;
        return;
    }  // end scope
    _commander_unit = new Commander_unit(commander_unit);
}  // end scope


bool Elite_unit::transform() const {
    std::cout << get_name() << " transforms" << std::endl;

    std::cout << get_class_name() << " Method: " << __func__ << std::endl;

    return true;
}  // end scope


bool Elite_unit::attack() const {
    std::cout << get_name() << " attacks with " << get_weapon_type() << std::endl;

    std::cout << get_class_name() << " Method: " << __func__ << std::endl;

    return true;
}  // end scope


bool Elite_unit::move() const {
    std::cout << get_name() << " moves" << std::endl;

    std::cout << get_class_name() << " Method: " << __func__ << std::endl;

    return true;
}  // end scope

bool Elite_unit::jump() const {
    std::cout << get_name() << " jumps" << std::endl;

    std::cout << get_class_name() << " Method: " << __func__ << std::endl;

    return true;
}  // end scope

bool Elite_unit::ultimate() {
    std::cout << "Elite_unit ultimates" << std::endl;

    std::cout << get_class_name() << " Method: " << __func__ << std::endl;

    return true;
}  // end scope


bool Elite_unit::phrase() {
    std::cout << "Today you will die!" << std::endl;

    std::cout << get_class_name() << " Method: " << __func__ << std::endl;

    return true;
}  // end scope


bool Elite_unit::operator==(const Elite_unit &comparable) const {
/**
 * @brief Function `if`.
 * @param comparable._health parameter.
 * @return Return value description (if any).
 */
    if (this->_health == comparable._health) {  // conditional branch
        std::cout << "Health matches" << std::endl;

        return true;
    } else {
        std::cout << "Health mismatch!" << std::endl;
        return false;
    }  // end scope
}  // end scope

bool Elite_unit::operator!=(const Elite_unit &comparable) const {
/**
 * @brief Function `if`.
 * @param comparable._health parameter.
 * @return Return value description (if any).
 */
    if (this->_health != comparable._health) {  // conditional branch
        std::cout << "Health mismatch" << std::endl;

        return true;
    } else {
        std::cout << "Health matches" << std::endl;

        return false;
    }  // end scope
}  // end scope

bool Elite_unit::operator<=(const Elite_unit &comparable) const {
/**
 * @brief Function `if`.
 * @param comparable._health parameter.
 * @return Return value description (if any).
 */
    if (this->_health < comparable._health) {  // conditional branch
        std::cout << "Health " << this->get_name() << " less than " << comparable.get_name() << std::endl;
        return true;
    } else if (this->_health > comparable._health) {
        std::cout << "Health " << this->_name << " more than " << comparable.get_name() << std::endl;
        return false;
    }  // end scope
    std::cout << "Health matches" << std::endl;
    return true;
}  // end scope

bool Elite_unit::operator>=(const Elite_unit &comparable) const {
/**
 * @brief Function `if`.
 * @param comparable._health parameter.
 * @return Return value description (if any).
 */
    if (this->_health > comparable._health) {  // conditional branch
        std::cout << "Health " << this->get_name() << " more than " << comparable.get_name() << std::endl;
        return true;
    } else if (this->_health < comparable._health) {
        std::cout << "Health " << this->_name << " less than " << comparable.get_name() << std::endl;
        return false;
    }  // end scope
    std::cout << "Health matches" << std::endl;
    return true;
}  // end scope

bool Elite_unit::operator>(const Elite_unit &comparable) const {
/**
 * @brief Function `if`.
 * @param comparable._health parameter.
 * @return Return value description (if any).
 */
    if (this->_health > comparable._health) {  // conditional branch
        std::cout << "Health " << this->get_name() << " more than " << comparable.get_name() << std::endl;
        return true;
    }  // end scope

    std::cout << "Health " << this->_name << " less than " << comparable.get_name() << std::endl;
    return false;
}  // end scope

bool Elite_unit::operator<(const Elite_unit &comparable) const {
/**
 * @brief Function `if`.
 * @param comparable._health parameter.
 * @return Return value description (if any).
 */
    if (this->_health < comparable._health) {  // conditional branch
        std::cout << "Health " << this->get_name() << " less than " << comparable.get_name() << std::endl;
        return true;
    }  // end scope

    std::cout << "Health " << this->_name << " more than " << comparable.get_name() << std::endl;
    return false;
}  // end scope

std::ostream &operator<<(std::ostream &os, const Elite_unit &elite_unit) {
    os << "Fraction: " << elite_unit.get_fraction() << "\nName: " << elite_unit.get_name()
            << "\nGun: " << elite_unit.get_weapon_type() << "\nDamage: " << elite_unit.get_damage()
            << "\nAmmmo: " << elite_unit.get_ammo() << "\nMove speed: " << elite_unit.move_speed()
            << "\nHealth: " << elite_unit.get_health() << std::endl;
    return os;
}  // end scope

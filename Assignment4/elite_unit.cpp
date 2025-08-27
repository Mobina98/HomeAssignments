#include <iostream>  // include dependency
#include "elite_unit.h"  // include dependency
#include "commander_unit.h"  // include dependency

Elite_unit::Elite_unit(const std::string &name, const std::string &fraction, const int &health,
                         const std::string &weapon_type, const int &damage, const int &ammo, const int &move_speed, const Commander_unit &commander_unit)
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
    _commander_unit = new Commander_unit(commander_unit);
    std::cout << name << " was created" << std::endl;
}  // end scope

Elite_unit::Elite_unit(const std::string &name, const std::string &fraction, const int &health,
                         const std::string &weapon_type, const int &damage, const int &ammo, const int &move_speed)
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
    _commander_unit = nullptr;
    std::cout << name << " was created" << std::endl;
}  // end scope

Elite_unit::~Elite_unit()
{  // begin scope
    delete _commander_unit;
    _commander_unit = nullptr;
    std::cout << get_name() << " was destroyed" << std::endl;
}  // end scope

std::string Elite_unit::get_name() const
{  // begin scope
    return _name;
}  // end scope

void Elite_unit::set_name(std::string name)
{  // begin scope
    _name = std::move(name);
}  // end scope

unsigned int Elite_unit::get_health() const
{  // begin scope
    return _health;
}  // end scope

void Elite_unit::set_health(unsigned int health)
{  // begin scope
    _health = health;
}  // end scope

std::string Elite_unit::get_weapon_type() const
{  // begin scope
    return _weapon_type;
}  // end scope

void Elite_unit::set_weapon_type(std::string weapon_type)
{  // begin scope
    _weapon_type = std::move(weapon_type);
}  // end scope

unsigned int Elite_unit::get_damage() const
{  // begin scope
    return _damage;
}  // end scope

void Elite_unit::set_damage(unsigned int damage)
{  // begin scope
    _damage = damage;
}  // end scope

unsigned int Elite_unit::move_speed() const
{  // begin scope
    return _move_speed;
}  // end scope

void Elite_unit::set_move_speed(unsigned int move_speed)
{  // begin scope
    _move_speed = move_speed;
}  // end scope

unsigned int Elite_unit::get_ammo() const
{  // begin scope
    return _ammo;
}  // end scope

void Elite_unit::set_ammo(unsigned int ammo)
{  // begin scope
    _ammo = ammo;
}  // end scope

std::string Elite_unit::get_fraction() const
{  // begin scope
    return _fraction;
}  // end scope

void Elite_unit::set_fraction(std::string fraction)
{  // begin scope
    _fraction = std::move(fraction);
}  // end scope

Commander_unit *Elite_unit::get_commander_unit() const
{  // begin scope
    return _commander_unit;
}  // end scope

void Elite_unit::set_commander_unit(const Commander_unit &commander_unit)
{  // begin scope
    if (_commander_unit != nullptr)  // conditional branch
    {  // begin scope
        *_commander_unit = commander_unit;
        return;
    }  // end scope
    _commander_unit = new Commander_unit(commander_unit);
}  // end scope

bool Elite_unit::transform() const
{  // begin scope
    std::cout << get_name() << " transforms" << std::endl;
    return true;
}  // end scope

bool Elite_unit::attack() const
{  // begin scope
    std::cout << get_name() << " attacks with " << get_weapon_type() << std::endl;
    return true;
}  // end scope

bool Elite_unit::move() const
{  // begin scope
    std::cout << get_name() << " moves" << std::endl;
    return true;
}  // end scope

bool Elite_unit::jump() const
{  // begin scope
    std::cout << get_name() << " jumps" << std::endl;
    return true;
}  // end scope

bool Elite_unit::ultimate()
{  // begin scope
    std::cout << "Elite_unit ultimates" << std::endl;
    return true;
}  // end scope

bool Elite_unit::phrase()
{  // begin scope
    std::cout << "Today you will die!" << std::endl;
    return true;
}  // end scope

bool Elite_unit::operator==(const Elite_unit &comparable) const
{  // begin scope
    if (this->_health == comparable._health)  // conditional branch
    {  // begin scope
        std::cout << "Health matches" << std::endl;
        return true;
    }  // end scope
    else
    {  // begin scope
        std::cout << "Health mismatch!" << std::endl;
        return false;
    }  // end scope
}  // end scope

bool Elite_unit::operator!=(const Elite_unit &comparable) const
{  // begin scope
    if (this->_health != comparable._health)  // conditional branch
    {  // begin scope
        std::cout << "Health mismatch" << std::endl;
        return true;
    }  // end scope
    else
    {  // begin scope
        std::cout << "Health matches" << std::endl;
        return false;
    }  // end scope
}  // end scope
bool Elite_unit::operator<=(const Elite_unit &comparable) const
{  // begin scope
    if (this->_health < comparable._health)  // conditional branch
    {  // begin scope
        std::cout << "Health " << this->get_name() << " less than " << comparable.get_name() << std::endl;
        return true;
    }  // end scope
    else if (this->_health > comparable._health)
    {  // begin scope
        std::cout << "Health " << this->_name << " more than " << comparable.get_name() << std::endl;
        return false;
    }  // end scope
    std::cout << "Health matches" << std::endl;
    return true;
}  // end scope

bool Elite_unit::operator>=(const Elite_unit &comparable) const
{  // begin scope
    if (this->_health > comparable._health)  // conditional branch
    {  // begin scope
        std::cout << "Health " << this->get_name() << " more than " << comparable.get_name() << std::endl;
        return true;
    }  // end scope
    else if (this->_health < comparable._health)
    {  // begin scope
        std::cout << "Health " << this->_name << " less than " << comparable.get_name() << std::endl;
        return false;
    }  // end scope
    std::cout << "Health matches" << std::endl;
    return true;
}  // end scope

bool Elite_unit::operator>(const Elite_unit &comparable) const
{  // begin scope
    if (this->_health > comparable._health)  // conditional branch
    {  // begin scope
        std::cout << "Health " << this->get_name() << " more than " << comparable.get_name() << std::endl;
        return true;
    }  // end scope

    std::cout << "Health " << this->_name << " less than " << comparable.get_name() << std::endl;
    return false;
}  // end scope

bool Elite_unit::operator<(const Elite_unit &comparable) const
{  // begin scope
    if (this->_health < comparable._health)  // conditional branch
    {  // begin scope
        std::cout << "Health " << this->get_name() << " less than " << comparable.get_name() << std::endl;
        return true;
    }  // end scope

    std::cout << "Health " << this->_name << " more than " << comparable.get_name() << std::endl;
    return false;
}  // end scope

std::ostream &operator<<(std::ostream &os, const Elite_unit &elite_unit)
{  // begin scope
    os << "Fraction: " << elite_unit.get_fraction() << "\nName: " << elite_unit.get_name()
       << "\nGun: " << elite_unit.get_weapon_type() << "\nDamage: " << elite_unit.get_damage()
       << "\nAmmmo: " << elite_unit.get_ammo() << "\nMove speed: " << elite_unit.move_speed()
       << "\nHealth: " << elite_unit.get_health() << std::endl;
    return os;
}  // end scope

std::istream &operator>>(std::istream &is, Elite_unit &elite_unit)
{  // begin scope
    std::string name, fraction, weapon_type;
    unsigned int health, damage, ammo, move_speed;
    
    std::cout << "Enter name: ";
    is >> name;
    elite_unit.set_name(name);

    std::cout << "Enter fraction: ";
    is >> fraction;
    elite_unit.set_fraction(fraction);

    std::cout << "Enter health: ";
    is >> health;
    elite_unit.set_health(health);

    std::cout << "Enter gun type: ";
    is >> weapon_type;
    elite_unit.set_weapon_type(weapon_type);

    std::cout << "Enter damage: ";
    is >> damage;
    elite_unit.set_damage(damage);

    std::cout << "Enter ammo: ";
    is >> ammo;
    elite_unit.set_ammo(ammo);

    std::cout << "Enter move speed: ";
    is >> move_speed;
    elite_unit.set_move_speed(move_speed);

    return is;
}  // end scope
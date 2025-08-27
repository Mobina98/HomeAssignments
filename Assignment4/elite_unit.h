#ifndef ELITE_UNIT_H
#define ELITE_UNIT_H
#include <iostream>  // include dependency
#include "commander_unit.h"  // include dependency

/**
 * @class Elite_unit
 * @brief Represents a unit/role within the game logic.
 */
class Elite_unit
{  // begin scope
public:
    Elite_unit(const std::string &name, const std::string &fraction, const int &health, const std::string &weapon_type,
                const int &damage, const int &ammo, const int &move_speed, const Commander_unit &commander_unit);

    Elite_unit(const std::string &name, const std::string &fraction, const int &health, const std::string &weapon_type,
                const int &damage, const int &ammo, const int &move_speed);

    virtual ~Elite_unit();

/**
 * @brief Function `get_name`.
 * @return Return value description (if any).
 */
    std::string get_name() const;
/**
 * @brief Function `set_name`.
 * @param name parameter.
 * @return Return value description (if any).
 */
    void set_name(std::string name);
/**
 * @brief Function `get_health`.
 * @return Return value description (if any).
 */
    unsigned int get_health() const;
/**
 * @brief Function `set_health`.
 * @param health parameter.
 * @return Return value description (if any).
 */
    void set_health(unsigned int health);
/**
 * @brief Function `get_weapon_type`.
 * @return Return value description (if any).
 */
    std::string get_weapon_type() const;
/**
 * @brief Function `set_weapon_type`.
 * @param weapon_type parameter.
 * @return Return value description (if any).
 */
    void set_weapon_type(std::string weapon_type);
/**
 * @brief Function `get_damage`.
 * @return Return value description (if any).
 */
    unsigned int get_damage() const;
/**
 * @brief Function `set_damage`.
 * @param damage parameter.
 * @return Return value description (if any).
 */
    void set_damage(unsigned int damage);
/**
 * @brief Function `move_speed`.
 * @return Return value description (if any).
 */
    unsigned int move_speed() const;
/**
 * @brief Function `set_move_speed`.
 * @param move_speed parameter.
 * @return Return value description (if any).
 */
    void set_move_speed(unsigned int move_speed);
/**
 * @brief Function `get_ammo`.
 * @return Return value description (if any).
 */
    unsigned int get_ammo() const;
/**
 * @brief Function `set_ammo`.
 * @param ammo parameter.
 * @return Return value description (if any).
 */
    void set_ammo(unsigned int ammo);
/**
 * @brief Function `get_fraction`.
 * @return Return value description (if any).
 */
    std::string get_fraction() const;
/**
 * @brief Function `set_fraction`.
 * @param fraction parameter.
 * @return Return value description (if any).
 */
    void set_fraction(std::string fraction);
    Commander_unit *get_commander_unit() const;
/**
 * @brief Function `set_commander_unit`.
 * @param commander_unit parameter.
 * @return Return value description (if any).
 */
    void set_commander_unit(const Commander_unit &commander_unit);
/**
 * @brief Function `transform`.
 * @return Return value description (if any).
 */
    bool transform() const;
/**
 * @brief Function `attack`.
 * @return Return value description (if any).
 */
    bool attack() const;
/**
 * @brief Function `move`.
 * @return Return value description (if any).
 */
    bool move() const;
/**
 * @brief Function `jump`.
 * @return Return value description (if any).
 */
    bool jump() const;
/**
 * @brief Function `ultimate`.
 * @return Return value description (if any).
 */
    virtual bool ultimate();
/**
 * @brief Function `phrase`.
 * @return Return value description (if any).
 */
    static bool phrase();
    bool operator==(const Elite_unit &comparable) const;
    bool operator!=(const Elite_unit &comparable) const;
    bool operator<=(const Elite_unit &comparable) const;
    bool operator>=(const Elite_unit &comparable) const;
    bool operator>(const Elite_unit &comparable) const;
    bool operator<(const Elite_unit &comparable) const;

    friend std::ostream& operator<<(std::ostream& os, const Elite_unit& t);
    friend std::istream& operator>>(std::istream& is, Elite_unit& t);

private:
    std::string _name;
    unsigned int _health;
    std::string _weapon_type;
    unsigned int _damage;
    unsigned int _move_speed;
    unsigned int _ammo;
    std::string _fraction;
    Commander_unit *_commander_unit;
};

#endif // ELITE_UNIT_H
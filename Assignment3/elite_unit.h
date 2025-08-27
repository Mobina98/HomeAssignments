#ifndef ELITE_UNIT_H
#define ELITE_UNIT_H
#include <iostream>

#include "commander_unit.h"

// 'public:' members are accessible from anywhere in the code
// Constructor declaration: Creates a Elite_unit with a Commander_unit object
class Elite_unit {
public:
    Elite_unit(const std::string &name, const std::string &fraction, const int &health, const std::string &weapon_type,
                const int &damage, const int &ammo, const int &move_speed, const Commander_unit &commander_unit);

    // Overloaded Constructor: Creates a Elite_unit without a Commander_unit object
    Elite_unit(const std::string &name, const std::string &fraction, const int &health, const std::string &weapon_type,
                const int &damage, const int &ammo, const int &move_speed);

    // Virtual Destructor: Ensures correct cleanup for derived classes (Marksman_unit, Support_unit, etc.)
    virtual ~Elite_unit();

    std::string get_name() const;

    void set_name(std::string name);

    unsigned int get_health() const;

    void set_health(unsigned int health);

    std::string get_weapon_type() const;

    void set_weapon_type(std::string weapon_type);

    unsigned int get_damage() const;

    void set_damage(unsigned int damage);

    unsigned int move_speed() const;

    void set_move_speed(unsigned int move_speed);

    unsigned int get_ammo() const;

    void set_ammo(unsigned int ammo);

    std::string get_fraction() const;

    void set_fraction(std::string fraction);

    Commander_unit *get_commander_unit() const;

    void set_commander_unit(const Commander_unit &commander_unit);

    bool transform() const;    // Action method: Command the elite_unit to transform

    bool attack() const;    // Action method: Command the elite_unit to attack

    bool move() const;    // Action method: Command the elite_unit to move

    bool jump() const;    // Action method: Command the elite_unit to jump

    // Virtual Action method: Command the elite_unit to use its ultimate ability.
    // 'virtual' means derived classes can provide their own implementation.
    virtual bool ultimate();

    // Static Action method: A phrase that is common to all Elite_units.
    // 'static' means this method is called on the class itself, not on an object instance.
    static bool phrase();

// 'private:' members are only accessible from within the class methods
private:
    std::string _name;

    unsigned int _health;

    std::string _weapon_type;

    unsigned int _damage;
    unsigned int _move_speed;
    unsigned int _ammo;
    std::string _fraction;

    Commander_unit *_commander_unit;    // Member variable: A pointer to a Commander_unit object
};


#endif //ELITE_UNIT_H

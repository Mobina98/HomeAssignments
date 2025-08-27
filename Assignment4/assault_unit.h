#ifndef ASSAULT_UNIT_H
#define ASSAULT_UNIT_H
#include "elite_unit.h"  // include dependency

/**
 * @class Assault_unit
 * @brief Represents a unit/role within the game logic.
 */
class Assault_unit : public Elite_unit
{  // begin scope
public:
    Assault_unit(const std::string &name, const std::string &fraction, const int &health, const std::string &weapon_type,
            const int &damage, const int &ammo, const int &move_speed);

    ~Assault_unit() override = default;

/**
 * @brief Function `defend`.
 * @return Return value description (if any).
 */
    bool defend();

    bool ultimate() override;

/**
 * @brief Function `get_rage`.
 * @return Return value description (if any).
 */
    unsigned int get_rage();

/**
 * @brief Function `set_rage`.
 * @param rage parameter.
 * @return Return value description (if any).
 */
    void set_rage(unsigned int rage);

/**
 * @brief Function `get_points_to_ulta`.
 * @return Return value description (if any).
 */
    unsigned int get_points_to_ulta();

/**
 * @brief Function `set_points_to_ulta`.
 * @param points_to_ulta parameter.
 * @return Return value description (if any).
 */
    void set_points_to_ulta(unsigned int points_to_ulta);

private:
    unsigned int _rage;
    unsigned int _points_to_ulta;
};

#endif //ASSAULT_UNIT_H
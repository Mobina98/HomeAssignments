#ifndef SUPPORT_UNIT_H
#define SUPPORT_UNIT_H
#include "elite_unit.h"  // include dependency

/**
 * @class Support_unit
 * @brief Represents a unit/role within the game logic.
 */
class Support_unit : public Elite_unit
{  // begin scope
public:
    Support_unit(const std::string &name, const std::string &fraction, const int &health, const std::string &weapon_type,
          const int &damage, const int &ammo, const int &move_speed);

    ~Support_unit() = default;

/**
 * @brief Function `heal`.
 * @return Return value description (if any).
 */
    bool heal() const;

    bool ultimate() override;

/**
 * @brief Function `get_support_unitines`.
 * @return Return value description (if any).
 */
    unsigned int get_support_unitines() const;

/**
 * @brief Function `set_support_unitines`.
 * @param support_unitines parameter.
 * @return Return value description (if any).
 */
    void set_support_unitines(unsigned int support_unitines);

/**
 * @brief Function `get_points_to_ulta`.
 * @return Return value description (if any).
 */
    unsigned int get_points_to_ulta() const;

/**
 * @brief Function `set_points_to_ulta`.
 * @param points_to_ulta parameter.
 * @return Return value description (if any).
 */
    void set_points_to_ulta(unsigned int points_to_ulta);

private:
    unsigned int _support_unitines;
    unsigned int _points_to_ulta;
};

#endif //SUPPORT_UNIT_H
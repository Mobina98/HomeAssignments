#ifndef HEAVY_UNIT_H
#define HEAVY_UNIT_H
#include "elite_unit.h"  // include dependency

/**
 * @class Heavy_unit
 * @brief Represents a unit/role within the game logic.
 */
class Heavy_unit : public Elite_unit
{  // begin scope
public:
    Heavy_unit(const std::string &name, const std::string &fraction, const int &health, const std::string &weapon_type,
              const int &damage, const int &ammo, const int &move_speed);
    ~Heavy_unit() = default;

/**
 * @brief Function `guide_gun`.
 * @return Return value description (if any).
 */
    bool guide_gun();

    bool ultimate() override;

/**
 * @brief Function `get_stabilization`.
 * @return Return value description (if any).
 */
    unsigned int get_stabilization() const;

/**
 * @brief Function `set_stabilization`.
 * @param stabilization parameter.
 * @return Return value description (if any).
 */
    void set_stabilization(unsigned int stabilization);

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
    unsigned int _stabilization;
    unsigned int _points_to_ulta;
};

#endif //HEAVY_UNIT_H
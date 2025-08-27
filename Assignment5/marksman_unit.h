#ifndef MARKSMAN_UNIT_H
#define MARKSMAN_UNIT_H
#include "elite_unit.h"  // include dependency


/**
 * @class Marksman_unit
 * @brief Represents a unit/role within the game logic.
 */
class Marksman_unit : public Elite_unit {
public:
    Marksman_unit(const std::string &name, const std::string &fraction, const int &health, const std::string &weapon_type,
           const int &damage, const int &ammo, const int &move_speed);

    ~Marksman_unit() = default;

/**
 * @brief Function `scope`.
 * @return Return value description (if any).
 */
    bool scope();

/**
 * @brief Function `hide`.
 * @return Return value description (if any).
 */
    bool hide();

    bool attack() const override;

    bool ultimate() override;

/**
 * @brief Function `get_mind_control`.
 * @return Return value description (if any).
 */
    unsigned int get_mind_control();

/**
 * @brief Function `set_mind_control`.
 * @param mind_control parameter.
 * @return Return value description (if any).
 */
    void set_mind_control(unsigned int mind_control);

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

/**
 * @brief Function `get_class_name`.
 * @return Return value description (if any).
 */
    std::string get_class_name() const {
        std::string name = "Class: Marksman_unit\n";
        return name;
    }  // end scope

private:
    unsigned int _mind_control{};
    unsigned int _points_to_ulta{};
};


#endif //MARKSMAN_UNIT_H

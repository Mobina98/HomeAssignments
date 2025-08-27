#ifndef MARKSMAN_UNIT_H
#define MARKSMAN_UNIT_H
#include "elite_unit.h"


class Marksman_unit : public Elite_unit {
public:
    Marksman_unit(const std::string &name, const std::string &fraction, const int &health, const std::string &weapon_type,
           const int &damage, const int &ammo, const int &move_speed);

    ~Marksman_unit() = default;

    // Static Methods
    // Static because scoping behavior is universal to all marksman_units
    static bool scope();

    static bool hide();

    bool ultimate() override;

    // Gets current focus level
    unsigned int get_mind_control();

    // Sets focus level
    void set_mind_control(unsigned int mind_control);

    // Gets ultimate charge progress
    unsigned int get_points_to_ulta();

    // Sets ultimate charge
    void set_points_to_ulta(unsigned int points_to_ulta);

private:
    unsigned int _mind_control{};  // Aim stability metric
    unsigned int _points_to_ulta{};  // Ultimate ability charge
};


#endif //MARKSMAN_UNIT_H

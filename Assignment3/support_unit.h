#ifndef SUPPORT_UNIT_H
#define SUPPORT_UNIT_H
#include "elite_unit.h"


class Support_unit : public Elite_unit {
public:
    Support_unit(const std::string &name, const std::string &fraction, const int &health, const std::string &weapon_type,
          const int &damage, const int &ammo, const int &move_speed);

    ~Support_unit() = default;

    // Attempts to heal a target (const = doesn't modify object)
    bool heal() const;

    // Ultimate ability - overrides Elite_unit's version
    bool ultimate() override;


    // Returns current support_unitine supply count
    unsigned int get_support_unitines() const;

    // Updates support_unitine inventory
    void set_support_unitines(unsigned int support_unitines);

    // Returns ultimate ability charge progress
    unsigned int get_points_to_ulta() const;

    // Sets ultimate ability charge
    void set_points_to_ulta(unsigned int points_to_ulta);

private:
    unsigned int _support_unitines;
    unsigned int _points_to_ulta;
};


#endif //SUPPORT_UNIT_H

#ifndef HEAVY_UNIT_H
#define HEAVY_UNIT_H
#include "elite_unit.h"


// Heavy_unit class publicly inherits from Elite_unit (a base class)
class Heavy_unit : public Elite_unit {
public:  // Public members (accessible from outside the class)
    Heavy_unit(const std::string &name, const std::string &fraction, const int &health, const std::string &weapon_type,
              const int &damage, const int &ammo, const int &move_speed);

    ~Heavy_unit() = default;

    // Simulates aiming the weapon
    bool guide_gun();

    // Ultimate ability (marked 'override' to ensure it replaces Elite_unit's version)
    bool ultimate() override;

    // Getter: Returns current weapon stabilization 
    unsigned int get_stabilization() const;

    // Setter: Updates stabilization value
    void set_stablization(unsigned int stabilization);

    // Getter: Returns points needed to activate ultimate ability
    unsigned int get_points_to_ulta() const;

    // Setter: Updates ultimate ability points
    void set_points_to_ulta(unsigned int points_to_ulta);

private:
    unsigned int _stabilization;
    unsigned int _points_to_ulta;
};

// Prevents multiple inclusions of this header file
#endif //HEAVY_UNIT_H

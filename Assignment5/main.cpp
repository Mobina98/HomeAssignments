#include <iostream>  // include dependency
#include "weapon_type.h"  // include dependency
#include "elite_unit.h"  // include dependency
#include "assault_unit.h"  // include dependency

int main()
{  // begin scope
    AKM akm = AKM("AKM", 30, 90);
    Elite_unit elite_unit = Elite_unit("Elite_unit", "Divine", 200,
                                          akm.get_weapon_type(), akm.get_damage(), akm.get_ammo(), 100);

    elite_unit.attack();

    std::cout << elite_unit << std::endl;

    Assault_unit assault_unit = Assault_unit("Assault_unit", "Autobot", 100,
                              akm.get_weapon_type(), akm.get_damage(), akm.get_ammo(), 100);

    std::cout << assault_unit << std::endl;
}  // end scope

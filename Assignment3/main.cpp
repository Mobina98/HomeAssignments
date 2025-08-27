#include <iostream>
#include "weapon_type.h"
#include "elite_unit.h"
#include "assault_unit.h"

int main()
{
    // Creates an "AKM" gun object with name "AKM", damage 30, and ammo 90
    AKM akm = AKM("AKM", 30, 90);
    
    // Creates a "Elite_unit" character with:
    // - Name: "Elite_unit"
    // - Type: "Divine"
    // - Health: 200
    // - Gun details taken from 'akm' (type, damage, ammo)
    // - Additional parameter: 100 (could be armor, energy, etc.)
    Elite_unit elite_unit = Elite_unit("Elite_unit", "Divine", 200,
                                          akm.get_weapon_type(), akm.get_damage(), akm.get_ammo(), 100);

    // Creates a "Assault_unit" character with:
    // - Name: "Assault_unit"
    // - Type: "Autobot"
    // - Health: 100
    // - Gun details taken from 'akm' (type, damage, ammo)
    // - Additional parameter: 100 (could be speed, shield, etc.)
    Assault_unit assault_unit = Assault_unit("Assault_unit", "Autobot", 100,
                              akm.get_weapon_type(), akm.get_damage(), akm.get_ammo(), 100);


}

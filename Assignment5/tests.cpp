#include "gtest/gtest.h"  // include dependency
#include "elite_unit.h"  // include dependency
#include "weapon_type.h"  // include dependency
#include "commander_unit.h"  // include dependency
#include "marksman_unit.h"  // include dependency
#include "assault_unit.h"  // include dependency
#include "heavy_unit.h"  // include dependency
#include "support_unit.h"  // include dependency
#include <vector>  // include dependency

TEST(Weapon_type, check_weapon_type_class) {
/**
 * @brief Function `gun`.
 * @param "AKM" parameter.
 * @param 30 parameter.
 * @param 30 parameter.
 * @return Return value description (if any).
 */
    Gun gun("AKM", 30, 30);
    EXPECT_EQ(gun.get_weapon_type(), "AKM");
    EXPECT_EQ(gun.get_ammo(), 30);
    EXPECT_EQ(gun.get_damage(), 30);
    gun.set_weapon_type("AWP");
    gun.set_damage(50);
    gun.set_ammo(45);
    EXPECT_EQ(gun.get_weapon_type(), "AWP");
    EXPECT_EQ(gun.get_damage(), 50);
    EXPECT_EQ(gun.get_ammo(), 45);
}  // end scope

TEST(Elite_unit, check_elite_unit_parameters) {
/**
 * @brief Function `gun`.
 * @param "AKM" parameter.
 * @param 30 parameter.
 * @param 90 parameter.
 * @return Return value description (if any).
 */
    Gun gun("AKM", 30, 90);

    Elite_unit elite_unit("Elite_unit", "Divine", 200, gun.get_weapon_type(), gun.get_damage(), gun.get_ammo(), 100);

    EXPECT_EQ(elite_unit.get_name(), "Elite_unit");
    EXPECT_EQ(elite_unit.get_fraction(), "Divine");
    EXPECT_EQ(elite_unit.get_health(), 200);
    EXPECT_EQ(elite_unit.get_weapon_type(), gun.get_weapon_type());
    EXPECT_EQ(elite_unit.get_damage(), gun.get_damage());
    EXPECT_EQ(elite_unit.get_ammo(), gun.get_ammo());
    EXPECT_EQ(elite_unit.move_speed(), 100);

    gun.set_weapon_type("AWP");
    gun.set_damage(70);
    gun.set_ammo(30);

    elite_unit.set_name("Prime");
    elite_unit.set_fraction("Autobot");
    elite_unit.set_health(100);
    elite_unit.set_weapon_type(gun.get_weapon_type());
    elite_unit.set_damage(gun.get_damage());
    elite_unit.set_ammo(gun.get_ammo());
    elite_unit.set_move_speed(130);

    EXPECT_EQ(elite_unit.get_name(), "Prime");
    EXPECT_EQ(elite_unit.get_fraction(), "Autobot");
    EXPECT_EQ(elite_unit.get_health(), 100);
    EXPECT_EQ(elite_unit.get_weapon_type(), gun.get_weapon_type());
    EXPECT_EQ(elite_unit.get_damage(), gun.get_damage());
    EXPECT_EQ(elite_unit.get_ammo(), gun.get_ammo());
    EXPECT_EQ(elite_unit.move_speed(), 130);
}  // end scope

TEST(Elite_unit, check_elite_unit_methods) {
/**
 * @brief Function `gun`.
 * @param "AKM" parameter.
 * @param 30 parameter.
 * @param 90 parameter.
 * @return Return value description (if any).
 */
    Gun gun("AKM", 30, 90);

    Elite_unit elite_unit("Elite_unit", "Divine", 200, gun.get_weapon_type(), gun.get_damage(), gun.get_ammo(), 100);

    EXPECT_TRUE(elite_unit.transform());
    EXPECT_TRUE(elite_unit.attack());
    EXPECT_TRUE(elite_unit.move());
    EXPECT_TRUE(elite_unit.jump());
    EXPECT_TRUE(elite_unit.ultimate());
    EXPECT_TRUE(elite_unit.phrase());
}  // end scope

TEST(Elite_unit, check_constructor_overloading) {
/**
 * @brief Function `commander_unit`.
 * @param "English" parameter.
 * @return Return value description (if any).
 */
    Commander_unit commander_unit("English");
/**
 * @brief Function `gun`.
 * @param "AKM" parameter.
 * @param 30 parameter.
 * @param 90 parameter.
 * @return Return value description (if any).
 */
    Gun gun("AKM", 30, 90);
    Elite_unit elite_unit("Elite_unit", "Divine", 200, gun.get_weapon_type(), gun.get_damage(), gun.get_ammo(), 100,
                            commander_unit);
    EXPECT_EQ(elite_unit.get_commander_unit()->get_commander_unit(), "English");
    commander_unit.set_commander_unit("Russian");
    elite_unit.get_commander_unit()->set_commander_unit(commander_unit.get_commander_unit());
    EXPECT_EQ(elite_unit.get_commander_unit()->get_commander_unit(), commander_unit.get_commander_unit());
}  // end scope

TEST(Elite_unit, check_operators) {
/**
 * @brief Function `gun`.
 * @param "AKM" parameter.
 * @param 30 parameter.
 * @param 90 parameter.
 * @return Return value description (if any).
 */
    Gun gun("AKM", 30, 90);
/**
 * @brief Function `awp`.
 * @param "AWP" parameter.
 * @param 70 parameter.
 * @param 30 parameter.
 * @return Return value description (if any).
 */
    Gun awp("AWP", 70, 30);
    Elite_unit elite_unit("Elite_unit", "Divine", 200, gun.get_weapon_type(), gun.get_damage(), gun.get_ammo(), 100);
    Marksman_unit marksman_unit("Marksman_unit", "Autobot", 80, awp.get_weapon_type(), awp.get_damage(), awp.get_ammo(), 70);

/**
 * @brief Function `EXPECT_TRUE`.
 * @param marksman_unit parameter.
 * @return Return value description (if any).
 */
    EXPECT_TRUE(elite_unit > marksman_unit);
/**
 * @brief Function `EXPECT_FALSE`.
 * @param marksman_unit parameter.
 * @return Return value description (if any).
 */
    EXPECT_FALSE(elite_unit < marksman_unit);
/**
 * @brief Function `EXPECT_FALSE`.
 * @param marksman_unit parameter.
 * @return Return value description (if any).
 */
    EXPECT_FALSE(elite_unit == marksman_unit);
/**
 * @brief Function `EXPECT_TRUE`.
 * @param marksman_unit parameter.
 * @return Return value description (if any).
 */
    EXPECT_TRUE(elite_unit != marksman_unit);
/**
 * @brief Function `EXPECT_TRUE`.
 * @param marksman_unit parameter.
 * @return Return value description (if any).
 */
    EXPECT_TRUE(elite_unit >= marksman_unit);
/**
 * @brief Function `EXPECT_FALSE`.
 * @param <=marksman_unit parameter.
 * @return Return value description (if any).
 */
    EXPECT_FALSE(elite_unit <=marksman_unit);

    elite_unit.set_health(50);

/**
 * @brief Function `EXPECT_FALSE`.
 * @param marksman_unit parameter.
 * @return Return value description (if any).
 */
    EXPECT_FALSE(elite_unit > marksman_unit);
/**
 * @brief Function `EXPECT_TRUE`.
 * @param marksman_unit parameter.
 * @return Return value description (if any).
 */
    EXPECT_TRUE(elite_unit < marksman_unit);
/**
 * @brief Function `EXPECT_FALSE`.
 * @param marksman_unit parameter.
 * @return Return value description (if any).
 */
    EXPECT_FALSE(elite_unit >= marksman_unit);
/**
 * @brief Function `EXPECT_TRUE`.
 * @param marksman_unit parameter.
 * @return Return value description (if any).
 */
    EXPECT_TRUE(elite_unit <= marksman_unit);

    marksman_unit.set_health(100);
    elite_unit.set_health(100);

/**
 * @brief Function `EXPECT_FALSE`.
 * @param marksman_unit parameter.
 * @return Return value description (if any).
 */
    EXPECT_FALSE(elite_unit > marksman_unit);
/**
 * @brief Function `EXPECT_FALSE`.
 * @param marksman_unit parameter.
 * @return Return value description (if any).
 */
    EXPECT_FALSE(elite_unit < marksman_unit);
/**
 * @brief Function `EXPECT_TRUE`.
 * @param marksman_unit parameter.
 * @return Return value description (if any).
 */
    EXPECT_TRUE(elite_unit >= marksman_unit);
/**
 * @brief Function `EXPECT_TRUE`.
 * @param marksman_unit parameter.
 * @return Return value description (if any).
 */
    EXPECT_TRUE(elite_unit <= marksman_unit);
/**
 * @brief Function `EXPECT_TRUE`.
 * @param marksman_unit parameter.
 * @return Return value description (if any).
 */
    EXPECT_TRUE(elite_unit == marksman_unit);
/**
 * @brief Function `EXPECT_FALSE`.
 * @param marksman_unit parameter.
 * @return Return value description (if any).
 */
    EXPECT_FALSE(elite_unit != marksman_unit);
}  // end scope

TEST(Assault_unit, test_class_assault_unit) {
/**
 * @brief Function `akm`.
 * @param "AKM" parameter.
 * @param 30 parameter.
 * @param 90 parameter.
 * @return Return value description (if any).
 */
    AKM akm("AKM", 30, 90);
    Assault_unit assault_unit("Assault_unit", "Autobot", 100, akm.get_weapon_type(), akm.get_damage(), akm.get_ammo(), 100);

    EXPECT_EQ(assault_unit.get_rage(), 0);
    EXPECT_EQ(assault_unit.get_points_to_ulta(), 0);

    assault_unit.set_rage(100);
    assault_unit.set_points_to_ulta(100);

    EXPECT_EQ(assault_unit.get_rage(), 100);
    EXPECT_EQ(assault_unit.get_points_to_ulta(), 100);

    EXPECT_TRUE(assault_unit.defend());
    EXPECT_TRUE(assault_unit.ultimate());
}  // end scope

TEST(Marksman_unit, test_class_marksman_unit) {
/**
 * @brief Function `awp`.
 * @param "AWP" parameter.
 * @param 70 parameter.
 * @param 30 parameter.
 * @return Return value description (if any).
 */
    AWP awp("AWP", 70, 30);
    Marksman_unit marksman_unit("Marksman_unit", "Decepticon", 120, awp.get_weapon_type(), awp.get_damage(), awp.get_ammo(), 70);

    EXPECT_EQ(marksman_unit.get_mind_control(), 70);
    EXPECT_EQ(marksman_unit.get_points_to_ulta(), 0);

    marksman_unit.set_mind_control(100);
    marksman_unit.set_points_to_ulta(100);

    EXPECT_EQ(marksman_unit.get_mind_control(), 100);
    EXPECT_EQ(marksman_unit.get_points_to_ulta(), 100);

    EXPECT_TRUE(marksman_unit.scope());
    EXPECT_TRUE(marksman_unit.hide());
    EXPECT_TRUE(marksman_unit.ultimate());
}  // end scope

TEST(Heavy_unit, test_class_heavy_unit) {
/**
 * @brief Function `bazooka`.
 * @param "Bazooka" parameter.
 * @param 100 parameter.
 * @param 5 parameter.
 * @return Return value description (if any).
 */
    Bazooka bazooka("Bazooka", 100, 5);
    Heavy_unit heavy_unit("Heavy_unit", "Decepticon", 200, bazooka.get_weapon_type(), bazooka.get_damage(),
                        bazooka.get_ammo(), 50);

    EXPECT_EQ(heavy_unit.get_stabilization(), 100);
    EXPECT_EQ(heavy_unit.get_points_to_ulta(), 0);

    heavy_unit.set_stablization(50);
    heavy_unit.set_points_to_ulta(100);

    EXPECT_EQ(heavy_unit.get_stabilization(), 50);
    EXPECT_EQ(heavy_unit.get_points_to_ulta(), 100);

    EXPECT_TRUE(heavy_unit.guide_gun());
    EXPECT_TRUE(heavy_unit.ultimate());
}  // end scope

TEST(Support_unit, test_class_support_unit) {
/**
 * @brief Function `arm`.
 * @param "Arm" parameter.
 * @param 60 parameter.
 * @param 31 parameter.
 * @return Return value description (if any).
 */
    Arm arm("Arm", 60, 1 << 31);
    Support_unit support_unit("Doctor", "Autobot", 300, arm.get_weapon_type(), arm.get_damage(), arm.get_ammo(), 200);

    EXPECT_EQ(support_unit.get_support_unitines(), 100);
    EXPECT_EQ(support_unit.get_points_to_ulta(), 0);

    support_unit.set_support_unitines(10);
    support_unit.set_points_to_ulta(100);

    EXPECT_EQ(support_unit.get_support_unitines(), 10);
    EXPECT_EQ(support_unit.get_points_to_ulta(), 100);
}  // end scope

TEST(Elite_unit, test_parent_type_pointer) {
    Elite_unit *elite_unit;

/**
 * @brief Function `akm`.
 * @param "AKM" parameter.
 * @param 30 parameter.
 * @param 90 parameter.
 * @return Return value description (if any).
 */
    AKM akm("AKM", 30, 90);
    Assault_unit assault_unit("Assault_unit", "Autobot", 100, akm.get_weapon_type(), akm.get_damage(), akm.get_ammo(), 100);

    elite_unit = &assault_unit;

    EXPECT_TRUE(elite_unit->ultimate());
    EXPECT_TRUE(elite_unit->attack());
    EXPECT_EQ(elite_unit->get_class_name(), assault_unit.get_class_name());

/**
 * @brief Function `awp`.
 * @param "AWP" parameter.
 * @param 70 parameter.
 * @param 30 parameter.
 * @return Return value description (if any).
 */
    AWP awp("AWP", 70, 30);
    Marksman_unit marksman_unit("Marksman_unit", "Decepticon", 120, awp.get_weapon_type(), awp.get_damage(), awp.get_ammo(), 70);

    elite_unit = &marksman_unit;

    EXPECT_TRUE(elite_unit->ultimate());
    EXPECT_TRUE(elite_unit->attack());
    EXPECT_EQ(elite_unit->get_class_name(), marksman_unit.get_class_name());

/**
 * @brief Function `arm`.
 * @param "Arm" parameter.
 * @param 60 parameter.
 * @param 31 parameter.
 * @return Return value description (if any).
 */
    Arm arm("Arm", 60, 1 << 31);
    Support_unit support_unit("Doctor", "Autobot", 300, arm.get_weapon_type(), arm.get_damage(), arm.get_ammo(), 200);

    elite_unit = &support_unit;

    EXPECT_TRUE(elite_unit->ultimate());
    EXPECT_TRUE(elite_unit->attack());
    EXPECT_EQ(elite_unit->get_class_name(), support_unit.get_class_name());

/**
 * @brief Function `bazooka`.
 * @param "Bazooka" parameter.
 * @param 100 parameter.
 * @param 5 parameter.
 * @return Return value description (if any).
 */
    Bazooka bazooka("Bazooka", 100, 5);
    Heavy_unit heavy_unit("Heavy_unit", "Decepticon", 120, bazooka.get_weapon_type(), bazooka.get_damage(),
                        bazooka.get_ammo(), 300);

    elite_unit = &heavy_unit;

    EXPECT_TRUE(elite_unit->ultimate());
    EXPECT_TRUE(elite_unit->attack());
    EXPECT_EQ(elite_unit->get_class_name(), heavy_unit.get_class_name());
}  // end scope

TEST(Elite_unit, check_vector_of_pointers) {
    std::vector<Elite_unit *> pull;
/**
 * @brief Function `akm`.
 * @param "AKM" parameter.
 * @param 30 parameter.
 * @param 90 parameter.
 * @return Return value description (if any).
 */
    AKM akm("AKM", 30, 90);
/**
 * @brief Function `awp`.
 * @param "AWP" parameter.
 * @param 70 parameter.
 * @param 30 parameter.
 * @return Return value description (if any).
 */
    AWP awp("AWP", 70, 30);
/**
 * @brief Function `bazooka`.
 * @param "Bazooka" parameter.
 * @param 100 parameter.
 * @param 5 parameter.
 * @return Return value description (if any).
 */
    Bazooka bazooka("Bazooka", 100, 5);
/**
 * @brief Function `arm`.
 * @param "Arm" parameter.
 * @param 60 parameter.
 * @param 31 parameter.
 * @return Return value description (if any).
 */
    Arm arm("Arm", 60, 1 << 31);


    Assault_unit avtomat("Avtomat", "Autobot", 100, akm.get_weapon_type(), akm.get_damage(), akm.get_ammo(), 110);
    Assault_unit pulemet("Pulemet", "Decepticon", 120, akm.get_weapon_type(), akm.get_damage(), akm.get_ammo(), 130);

    Marksman_unit marksman_unit("Marksman_unit", "Autobot", 120, awp.get_weapon_type(), awp.get_damage(), awp.get_ammo(), 70);
    Marksman_unit city_marksman_unit("Mark_Marksman_unit", "Decepticon", 140, awp.get_weapon_type(), awp.get_damage(), awp.get_ammo(), 80);

    Heavy_unit heavy_unit("Heavy_unit", "Autobot", 150, bazooka.get_weapon_type(), bazooka.get_damage(), bazooka.get_ammo(),
                        150);
    Heavy_unit bazookman("Bazookman", "Decepticon", 140, bazooka.get_weapon_type(), bazooka.get_damage(),
                        bazooka.get_ammo(), 160);

    Support_unit doctor("Doctor", "Autobot", 200, arm.get_weapon_type(), arm.get_damage(), arm.get_ammo(), 150);
    Support_unit support_unit("Support_unit", "Decepticon", 250, arm.get_weapon_type(), arm.get_damage(), arm.get_ammo(), 150);
    Support_unit assistant("Assistant", "Divine", 300, arm.get_weapon_type(), arm.get_damage() * 2, arm.get_ammo(), 300);

    pull.push_back(&avtomat);
    pull.push_back(&pulemet);
    pull.push_back(&marksman_unit);
    pull.push_back(&city_marksman_unit);
    pull.push_back(&heavy_unit);
    pull.push_back(&bazookman);
    pull.push_back(&doctor);
    pull.push_back(&support_unit);
    pull.push_back(&assistant);

/**
 * @brief Function `for`.
 * @param pull parameter.
 * @return Return value description (if any).
 */
    for (const auto &pull: pull) {  // loop iteration
        EXPECT_TRUE(pull->attack());
        EXPECT_TRUE(pull->ultimate());
        EXPECT_EQ(pull->get_class_name(), pull->get_class_name());
    }  // end scope
}  // end scope

#include "gtest/gtest.h"
#include "elite_unit.h"
#include "weapon_type.h"
#include "commander_unit.h"
#include "marksman_unit.h"
#include "assault_unit.h"
#include "heavy_unit.h"
#include "support_unit.h"

// Define a test case named 'Weapon_type' with a test named 'check_weapon_type_class'
TEST(Weapon_type, check_weapon_type_class)
{
    Gun gun("AKM", 30, 30);    // Create a Gun object named "AKM" with 30 ammo and 30 damage
    EXPECT_EQ(gun.get_weapon_type(), "AKM");    // Test (expect) that the gun's type is correctly returned as "AKM"
    EXPECT_EQ(gun.get_ammo(), 30);    // Test that the ammo count is correctly returned as 30
    EXPECT_EQ(gun.get_damage(), 30);   // Test that the damage value is correctly returned as 30 
    gun.set_weapon_type("AWP"); // Use setter methods to change the gun's properties   
    gun.set_damage(50);
    gun.set_ammo(45);
    EXPECT_EQ(gun.get_weapon_type(), "AWP");    // Test that the new values were set correctly
    EXPECT_EQ(gun.get_damage(), 50);
    EXPECT_EQ(gun.get_ammo(), 45);
}

// Test case for the base Elite_unit class parameters (getters/setters)
TEST(Elite_unit, check_elite_unit_parameters)
{
    Gun gun("AKM", 30, 90);  // Create a Gun object for the Elite_unit to use  

    Elite_unit elite_unit("Elite_unit", "Divine", 200, gun.get_weapon_type(), gun.get_damage(), gun.get_ammo(), 100);  // Create a Elite_unit object, initializing it with various parameters including the gun's stats  

    // Test that all the Elite_unit's properties were set correctly upon creation
    EXPECT_EQ(elite_unit.get_name(), "Elite_unit");
    EXPECT_EQ(elite_unit.get_fraction(), "Divine");
    EXPECT_EQ(elite_unit.get_health(), 200);
    EXPECT_EQ(elite_unit.get_weapon_type(), gun.get_weapon_type());
    EXPECT_EQ(elite_unit.get_damage(), gun.get_damage());
    EXPECT_EQ(elite_unit.get_ammo(), gun.get_ammo());
    EXPECT_EQ(elite_unit.move_speed(), 100);

    gun.set_weapon_type("AWP");  // Change the properties of the gun  
    gun.set_damage(70);
    gun.set_ammo(30);

    elite_unit.set_name("Prime");   // Use setter methods to change the Elite_unit's properties to match the new gun stats and other values 
    elite_unit.set_fraction("Autobot");
    elite_unit.set_health(100);
    elite_unit.set_weapon_type(gun.get_weapon_type());
    elite_unit.set_damage(gun.get_damage());
    elite_unit.set_ammo(gun.get_ammo());
    elite_unit.set_move_speed(130);

    EXPECT_EQ(elite_unit.get_name(), "Prime");    // Test that all the Elite_unit's new properties were set correctly
    EXPECT_EQ(elite_unit.get_fraction(), "Autobot");
    EXPECT_EQ(elite_unit.get_health(), 100);
    EXPECT_EQ(elite_unit.get_weapon_type(), gun.get_weapon_type());
    EXPECT_EQ(elite_unit.get_damage(), gun.get_damage());
    EXPECT_EQ(elite_unit.get_ammo(), gun.get_ammo());
    EXPECT_EQ(elite_unit.move_speed(), 130);
}

// Test case for the base Elite_unit class methods/actions
TEST(Elite_unit, check_elite_unit_methods)
{
    Gun gun("AKM", 30, 90);  // Create a Gun and a Elite_unit object  

    Elite_unit elite_unit("Elite_unit", "Divine", 200, gun.get_weapon_type(), gun.get_damage(), gun.get_ammo(), 100);

    EXPECT_TRUE(elite_unit.transform()); // Test (expect) that various action methods of the Elite_unit return true, indicating success   
    EXPECT_TRUE(elite_unit.attack());
    EXPECT_TRUE(elite_unit.move());
    EXPECT_TRUE(elite_unit.jump());
    EXPECT_TRUE(elite_unit.ultimate());
    EXPECT_TRUE(elite_unit.phrase());
}

// Test case for a more complex constructor of Elite_unit that includes a Commander_unit object
TEST(Elite_unit, check_constructor_overloading)
{
    Commander_unit commander_unit("English"); // Create a Commander_unit object set to "English"   
    Gun gun("AKM", 30, 90);
    Elite_unit elite_unit("Elite_unit", "Divine", 200, gun.get_weapon_type(), gun.get_damage(), gun.get_ammo(), 100,
                            commander_unit);  // Create a Elite_unit using a constructor that also takes a Commander_unit object  
    EXPECT_EQ(elite_unit.get_commander_unit()->get_commander_unit(), commander_unit.get_commander_unit());    // Test that the Elite_unit's commander_unit was correctly initialized
    commander_unit.set_commander_unit("Russian");    // Change the original commander_unit object's language
    elite_unit.get_commander_unit()->set_commander_unit(commander_unit.get_commander_unit());  // Use the Elite_unit's getter to get its commander_unit object and change its language  
    EXPECT_EQ(elite_unit.get_commander_unit()->get_commander_unit(), commander_unit.get_commander_unit());   // Test that the change was successful 
}

TEST(Assault_unit, test_class_assault_unit)
{
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
}

TEST(Marksman_unit, test_class_marksman_unit)
{
    AWP awp("AWP", 70, 30);
    Marksman_unit marksman_unit("Marksman_unit", "Decepticon", 120, awp.get_weapon_type(), awp.get_damage(), awp.get_ammo(), 70);

    EXPECT_EQ(marksman_unit.get_mind_control(), 70);
    EXPECT_EQ(marksman_unit.get_points_to_ulta(), 0);

    marksman_unit.set_mind_control(100);
    marksman_unit.set_points_to_ulta(100);

    EXPECT_EQ(marksman_unit.get_mind_control(), 100);
    EXPECT_EQ(marksman_unit.get_points_to_ulta(), 100);

    EXPECT_TRUE(marksman_unit.hide());
    EXPECT_TRUE(marksman_unit.ultimate());
}

TEST(Heavy_unit, test_class_heavy_unit)
{
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
}

TEST(Support_unit, test_class_support_unit)
{
    Arm arm("Arm", 60, 1 << 31);
    Support_unit support_unit("Doctor", "Autobot", 300, arm.get_weapon_type(), arm.get_damage(), arm.get_ammo(), 200);

    EXPECT_EQ(support_unit.get_support_unitines(), 100);
    EXPECT_EQ(support_unit.get_points_to_ulta(), 0);

    support_unit.set_support_unitines(10);
    support_unit.set_points_to_ulta(100);

    EXPECT_EQ(support_unit.get_support_unitines(), 10);
    EXPECT_EQ(support_unit.get_points_to_ulta(), 100);
}

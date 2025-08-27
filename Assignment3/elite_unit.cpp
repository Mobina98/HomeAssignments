#include <iostream>
#include "elite_unit.h"
#include "commander_unit.h"

// Definition of the Elite_unit class constructor that includes a Commander_unit object
// This is an overloaded constructor that takes 8 parameters
Elite_unit::Elite_unit(const std::string &name, const std::string &fraction, const int &health,
                         const std::string &weapon_type, const int &damage, const
                         int &ammo, const int &move_speed, const Commander_unit &commander_unit) {
    set_name(name); // Initialize the new object's properties using setter methods 
    set_health(health);
    set_weapon_type(weapon_type);
    set_damage(damage);
    set_ammo(ammo);
    set_move_speed(move_speed);
    set_fraction(fraction);
    _commander_unit = new Commander_unit(commander_unit);  // Dynamically allocate a new Commander_unit object as a copy of the provided 'commander_unit' parameter
    std::cout << name << " was created" << std::endl;  // Print a message to the console confirming the object's creation
}

// Definition of the Elite_unit class constructor that does NOT include a Commander_unit object
// This is an overloaded constructor that takes 7 parameters
Elite_unit::Elite_unit(const std::string &name, const std::string &fraction, const int &health,
                         const std::string &weapon_type, const int &damage, const
                         int &ammo, const int &move_speed) {
    set_name(name);  // Initialize the new object's properties using setter methods
    set_health(health);
    set_weapon_type(weapon_type);
    set_damage(damage);
    set_ammo(ammo);
    set_move_speed(move_speed);
    set_fraction(fraction);
    _commander_unit = nullptr;  // Set the commander_unit pointer to nullptr (meaning it doesn't point to any Commander_unit object)
    std::cout << name << " was created" << std::endl;  // Print a message to the console confirming the object's creation
}

// Definition of the Elite_unit class destructor
// This is automatically called when a Elite_unit object is destroyed
Elite_unit::~Elite_unit() {
    delete _commander_unit; // Delete the dynamically allocated Commander_unit object to free the memory (if it exists) 
    _commander_unit = nullptr;  // Set the pointer to nullptr to avoid a dangling pointer
    std::cout << get_name() << " was destroyed" << std::endl; // Print a message to the console confirming the object's destruction 
}

// Implementation of the transform() action method
// 'const' means this method does not modify the object's member variables
bool Elite_unit::transform() const {
    std::cout << get_name() << " transforms" << std::endl;  // Print an action message to the console

    return true;  // Return true to indicate the action was successful
}

// Implementation of the attack() action method
bool Elite_unit::attack() const {
    std::cout << get_name() << " attacks with " << get_weapon_type() << std::endl;  // Print an action message that includes the gun type

    return true;
}

// Implementation of the move() action method
bool Elite_unit::move() const {
    std::cout << get_name() << " moves" << std::endl;

    return true;
}

// Implementation of the jump() action method
bool Elite_unit::jump() const {
    std::cout << get_name() << " jumps" << std::endl;
    return true;
}

// Implementation of the ultimate() action method
// This method is not 'const' because it might modify the object's state in the future
bool Elite_unit::ultimate() {
    std::cout << "Elite_unit ultimates" << std::endl;

    return true;
}

// Implementation of the phrase() action method
bool Elite_unit::phrase() {
    std::cout << "Today you will die!" << std::endl;

    return true;
}

// Getter method for the _name member variable
std::string Elite_unit::get_name() const {
    return _name;
}

// Setter method for the _name member variable
// std::move is used for optimization (moves the string instead of copying it)
void Elite_unit::set_name(std::string name) {
    _name = std::move(name);
}

// Getter method for the _health member variable
unsigned int Elite_unit::get_health() const {
    return _health;
}

// Setter method for the _health member variable
void Elite_unit::set_health(unsigned int health) {
    _health = health;
}

// Getter method for the _weapon_type member variable
std::string Elite_unit::get_weapon_type() const {
    return _weapon_type;
}

// Setter method for the _weapon_type member variable
void Elite_unit::set_weapon_type(std::string weapon_type) {
    _weapon_type = std::move(weapon_type);
}

// Getter method for the _damage member variable
unsigned int Elite_unit::get_damage() const {
    return _damage;
}

// Setter method for the _damage member variable
void Elite_unit::set_damage(unsigned int damage) {
    _damage = damage;
}

// Getter method for the _move_speed member variable
unsigned int Elite_unit::move_speed() const {
    return _move_speed;
}

// Setter method for the _move_speed member variable
void Elite_unit::set_move_speed(unsigned int move_speed) {
    _move_speed = move_speed;
}

// Getter method for the _ammo member variable
unsigned int Elite_unit::get_ammo() const {
    return _ammo;
}

// Setter method for the _ammo member variable
void Elite_unit::set_ammo(unsigned int ammo) {
    _ammo = ammo;
}

// Getter method for the _fraction member variable
std::string Elite_unit::get_fraction() const {
    return _fraction;
}

// Setter method for the _fraction member variable
void Elite_unit::set_fraction(std::string fraction) {
    _fraction = std::move(fraction);
}

// Getter method for the _commander_unit pointer
// Returns a pointer to the Commander_unit object (or nullptr if it doesn't exist)
Commander_unit *Elite_unit::get_commander_unit() const {
    return _commander_unit;
}

// Setter method for the _commander_unit pointer
// Check if a Commander_unit object already exists
void Elite_unit::set_commander_unit(const Commander_unit &commander_unit) {
    if (_commander_unit != nullptr) {
        *_commander_unit = commander_unit;  // If it does, assign the new commander_unit to the existing object (dereference the pointer)
        return;
    }
    _commander_unit = new Commander_unit(commander_unit);  // If no Commander_unit object exists, dynamically allocate a new one as a copy of the provided commander_unit
}

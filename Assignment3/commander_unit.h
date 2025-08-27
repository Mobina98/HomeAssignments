#ifndef COMMANDER_UNIT_H
#define COMMANDER_UNIT_H
#include <string>

class Commander_unit {
public:
    Commander_unit(std::string);    // Constructor declaration: Creates a Commander_unit object, requires a string parameter

    // Destructor declaration: '= default' lets the compiler generate a standard destructor automatically
    // This is safe because this class doesn't manage any dynamic memory itself
    ~Commander_unit() = default;

    // Getter method declaration: Returns the value of the private _commander_unit member
    // 'const' means this method will not modify the object's state
    std::string get_commander_unit() const;

    // Setter method declaration: Sets a new value for the private _commander_unit member
    void set_commander_unit(std::string commander_unit);

    // Action method declaration: Likely prints a phrase using the stored commander_unit
    bool get_phrase() const;

// 'private:' members are only accessible from within the class's own methods
// Private member variable: Stores the commander_unit data (e.g., "English", "Russian")
// This variable is encapsulated and can only be changed via set_commander_unit() and read via get_commander_unit()
private:
    std::string _commander_unit;
};


#endif //COMMANDER_UNIT_H

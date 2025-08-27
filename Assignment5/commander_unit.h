#ifndef COMMANDER_UNIT_H
#define COMMANDER_UNIT_H
#include <string>  // include dependency

/**
 * @class Commander_unit
 * @brief Represents a unit/role within the game logic.
 */
class Commander_unit {
public:
/**
 * @brief Function `Commander_unit`.
 * @param std::string parameter.
 * @return Return value description (if any).
 */
    Commander_unit(std::string);

    ~Commander_unit() = default;


/**
 * @brief Function `get_commander_unit`.
 * @return Return value description (if any).
 */
    std::string get_commander_unit() const;

/**
 * @brief Function `set_commander_unit`.
 * @param commander_unit parameter.
 * @return Return value description (if any).
 */
    void set_commander_unit(std::string commander_unit);

/**
 * @brief Function `get_phrase`.
 * @return Return value description (if any).
 */
    bool get_phrase() const;


/**
 * @brief Function `get_class_name`.
 * @return Return value description (if any).
 */
    std::string get_class_name() const;

private:
    std::string _commander_unit;
};


#endif //COMMANDER_UNIT_H

#ifndef WEAPON_TYPE_H
#define WEAPON_TYPE_H


/**
 * @class Gun
 * @brief Represents a unit/role within the game logic.
 */
class Gun {
public:
/**
 * @brief Function `Gun`.
 * @param weapon_type parameter.
 * @param damage parameter.
 * @param ammo parameter.
 * @return Return value description (if any).
 */
    Gun(const std::string &weapon_type, const unsigned int &damage, const unsigned int &ammo);

    ~Gun() = default;

/**
 * @brief Function `get_weapon_type`.
 * @return Return value description (if any).
 */
    std::string get_weapon_type() const;

/**
 * @brief Function `set_weapon_type`.
 * @param weapon_type parameter.
 * @return Return value description (if any).
 */
    void set_weapon_type(std::string weapon_type);

/**
 * @brief Function `get_ammo`.
 * @return Return value description (if any).
 */
    unsigned int get_ammo() const;

/**
 * @brief Function `set_ammo`.
 * @param ammo parameter.
 * @return Return value description (if any).
 */
    void set_ammo(const unsigned int ammo);

/**
 * @brief Function `get_damage`.
 * @return Return value description (if any).
 */
    unsigned int get_damage() const;

/**
 * @brief Function `set_damage`.
 * @param damage parameter.
 * @return Return value description (if any).
 */
    void set_damage(const unsigned int damage);

/**
 * @brief Function `get_class_name`.
 * @return Return value description (if any).
 */
    virtual std::string get_class_name() const;

protected:
    std::string _weapon_type;
    unsigned int _ammo;
    unsigned int _damage;
};

/**
 * @class AKM
 * @brief Represents a unit/role within the game logic.
 */
class AKM : public Gun {
public:
/**
 * @brief Function `AKM`.
 * @param name parameter.
 * @param damage parameter.
 * @param ammo parameter.
 * @return Return value description (if any).
 */
    AKM(const std::string &name, const unsigned int &damage, const unsigned int &ammo);

    ~AKM() = default;
};

/**
 * @class AWP
 * @brief Represents a unit/role within the game logic.
 */
class AWP : public Gun {
public:
/**
 * @brief Function `AWP`.
 * @param name parameter.
 * @param damage parameter.
 * @param ammo parameter.
 * @return Return value description (if any).
 */
    AWP(const std::string &name, const unsigned int &damage, const unsigned int &ammo);

    ~AWP() = default;
};


class HeavyUnit : public Gun {
public:
/**
 * @brief Function `HeavyUnit`.
 * @param name parameter.
 * @param damage parameter.
 * @param ammo parameter.
 * @return Return value description (if any).
 */
    HeavyUnit(const std::string &name, const unsigned int &damage, const unsigned int &ammo);

    ~HeavyUnit() = default;
};

/**
 * @class Arm
 * @brief Represents a unit/role within the game logic.
 */
class Arm : public Gun {
public:
/**
 * @brief Function `Arm`.
 * @param name parameter.
 * @param damage parameter.
 * @param ammo parameter.
 * @return Return value description (if any).
 */
    Arm(const std::string &name, const unsigned int &damage, const unsigned int &ammo);

    ~Arm() = default;
};

#endif //WEAPON_TYPE_H

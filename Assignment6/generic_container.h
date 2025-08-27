#ifndef TEMPLATE_CLASS_H
#define TEMPLATE_CLASS_H
#include <vector>  // include dependency


template<class T>
/**
 * @class Template_class
 * @brief Core class: Template_class responsibilities and behavior.
 */
class Template_class {
public:
    Template_class(const int number, const std::vector<float> &vector)
        : _number(number), _vector(vector) {
    };

    ~Template_class() = default;

/**
 * @brief foo function.
 * @return Return value description (if any).
 */
    bool foo() {
        return _instance.bar(_number, _vector);  // return result
    }  // end scope

private:
    T _instance{};
    int _number;
    std::vector<float> _vector;
};

template<>
/**
 * @class Template_class
 * @brief Core class: Template_class responsibilities and behavior.
 */
class Template_class<int> {
public:
    Template_class(const int number, const std::vector<float> &vector)
        : _number(number), _vector(vector) {
    }  // end scope

/**
 * @brief foo function.
 * @return Return value description (if any).
 */
    bool foo() {
        return true;  // return result
    }  // end scope

private:
    int _number;
    std::vector<float> _vector;
};


template<>
/**
 * @class Template_class
 * @brief Core class: Template_class responsibilities and behavior.
 */
class Template_class<double> {
public:
    Template_class(const int number, const std::vector<float> &vector)
        : _number(number), _vector(vector) {
    }  // end scope

/**
 * @brief foo function.
 * @return Return value description (if any).
 */
    bool foo() {
        return false;  // return result
    }  // end scope

private:
    int _number;
    std::vector<float> _vector;
};


#endif //TEMPLATE_CLASS_H

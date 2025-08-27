#ifndef DATAVISUALIZER_H
#define DATAVISUALIZER_H

#include <vector>  // include dependency

/**
 * @class DataVisualizer
 * @brief Core class: DataVisualizer responsibilities and behavior.
 */
class DataVisualizer {
public:
    DataVisualizer() = default;

    ~DataVisualizer() = default;

/**
 * @brief bar function.
 * @param number parameter description.
 * @param vector parameter description.
 * @return Return value description (if any).
 */
    static bool bar(int number, const std::vector<float> &vector);

/**
 * @brief c_3_1 function.
 * @return Return value description (if any).
 */
    static int c_3_1();

/**
 * @brief c_3_2 function.
 * @return Return value description (if any).
 */
    static float c_3_2();

/**
 * @brief c_3_3 function.
 * @return Return value description (if any).
 */
    static void c_3_3();
};


#endif

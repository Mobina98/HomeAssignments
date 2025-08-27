#ifndef DATAPROCESSOR_H
#define DATAPROCESSOR_H

#include <vector>  // include dependency

/**
 * @class DataProcessor
 * @brief Core class: DataProcessor responsibilities and behavior.
 */
class DataProcessor {
public:
    DataProcessor() = default;

    DataProcessor(const DataProcessor &other) = default;

    ~DataProcessor() = default;

/**
 * @brief bar function.
 * @param number parameter description.
 * @param vector parameter description.
 * @return Return value description (if any).
 */
    static bool bar(int number, const std::vector<float> &vector);

/**
 * @brief c_1_1 function.
 * @return Return value description (if any).
 */
    static int c_1_1();

/**
 * @brief c_1_2 function.
 * @return Return value description (if any).
 */
    static float c_1_2();

/**
 * @brief c_1_3 function.
 * @return Return value description (if any).
 */
    static void c_1_3();
};


#endif

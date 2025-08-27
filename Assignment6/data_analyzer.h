#ifndef DATAANALYZER_H
#define DATAANALYZER_H

#include <vector>  // include dependency


/**
 * @class DataAnalyzer
 * @brief Core class: DataAnalyzer responsibilities and behavior.
 */
class DataAnalyzer {
public:
    DataAnalyzer() = default;

    ~DataAnalyzer() = default;

/**
 * @brief bar function.
 * @param number parameter description.
 * @param vec parameter description.
 * @return Return value description (if any).
 */
    static bool bar(int number, const std::vector<float> &vec);

/**
 * @brief c_2_1 function.
 * @return Return value description (if any).
 */
    static int c_2_1();

/**
 * @brief c_2_2 function.
 * @return Return value description (if any).
 */
    static float c_2_2();

/**
 * @brief c_2_3 function.
 * @return Return value description (if any).
 */
    static void c_2_3();
};


#endif

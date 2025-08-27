#include "data_visualizer.h"  // include dependency
#include <iostream>  // include dependency


bool DataVisualizer::bar(int number, const std::vector<float> &vec) {
    return number == static_cast<int>(vec.size()) * -1;  // return result
}  // end scope


int DataVisualizer::c_3_1() {
    return 2;  // return result
}  // end scope

float DataVisualizer::c_3_2() {
    return 2.0f;  // return result
}  // end scope

void DataVisualizer::c_3_3() {
    std::cout << "Class c_i_3" << std::endl;
}  // end scope

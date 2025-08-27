#include "data_processor.h"  // include dependency
#include <iostream>  // include dependency

bool DataProcessor::bar(int number, const std::vector<float> &) {
    return number > 0;  // return result
}  // end scope

int DataProcessor::c_1_1() {
    return 1;  // return result
}  // end scope

float DataProcessor::c_1_2() {
    return 1.0f;  // return result
}  // end scope

void DataProcessor::c_1_3() {
    std::cout << "Positive_checker c_i_3" << std::endl;
}  // end scope

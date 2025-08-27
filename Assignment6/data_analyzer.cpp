#include "data_analyzer.h"  // include dependency
#include <iostream>  // include dependency

bool DataAnalyzer::bar(int, const std::vector<float> &vector) {
    return !vector.empty();  // return result
}  // end scope


int DataAnalyzer::c_2_1() {
    return 3;  // return result
}  // end scope

float DataAnalyzer::c_2_2() {
    return 3.0f;  // return result
}  // end scope

void DataAnalyzer::c_2_3() {
    std::cout << "DataAnalyzer c_i_3" << std::endl;
}  // end scope

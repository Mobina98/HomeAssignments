#include <gtest/gtest.h>  // include dependency
#include "data_processor.h"  // include dependency
#include "data_analyzer.h"  // include dependency
#include "generic_container.h"  // include dependency
#include "data_visualizer.h"  // include dependency

TEST(DataProcessor, returns_true_for_positive_number) {
/**
 * @brief checker function.
 * @param 5 parameter description.
 * @param {} parameter description.
 * @return Return value description (if any).
 */
    Template_class<DataProcessor> checker(5, {});
    EXPECT_TRUE(checker.foo());
}  // end scope

TEST(DataProcessor, return_false_for_negative_number) {
/**
 * @brief checker function.
 * @param -5 parameter description.
 * @param {} parameter description.
 * @return Return value description (if any).
 */
    Template_class<DataProcessor> checker(-5, {});
    EXPECT_FALSE(checker.foo());
}  // end scope

TEST(DataVisualizer, returns_true_when_number_is_negative_size) {
/**
 * @brief checker function.
 * @param -2 parameter description.
 * @param {1.0f parameter description.
 * @param 2.0f} parameter description.
 * @return Return value description (if any).
 */
    Template_class<DataVisualizer> checker(-2, {1.0f, 2.0f});
    EXPECT_TRUE(checker.foo());
}  // end scope

TEST(DataVisualizer, returns_false_when_number_is_not_negative_size) {
/**
 * @brief checker function.
 * @param -2 parameter description.
 * @param {1.0f} parameter description.
 * @return Return value description (if any).
 */
    Template_class<DataVisualizer> checker(-2, {1.0f});
    EXPECT_FALSE(checker.foo());
}  // end scope

TEST(DataAnalyzer, returns_true_for_non_empty_vector) {
/**
 * @brief checker function.
 * @param -2 parameter description.
 * @param {1.0f} parameter description.
 * @return Return value description (if any).
 */
    Template_class<DataAnalyzer> checker(-2, {1.0f});
    EXPECT_TRUE(checker.foo());
}  // end scope

TEST(DataAnalyzer, returns_false_for_non_empty_vector) {
/**
 * @brief checker function.
 * @param -1 parameter description.
 * @param {} parameter description.
 * @return Return value description (if any).
 */
    Template_class<DataAnalyzer> checker(-1, {});
    EXPECT_FALSE(checker.foo());
}  // end scope

TEST(Template_class, int_specialization_test) {
/**
 * @brief int_test function.
 * @param 42 parameter description.
 * @param {1.0f} parameter description.
 * @return Return value description (if any).
 */
    Template_class<int> int_test(42, {1.0f});
    EXPECT_TRUE(int_test.foo());
}  // end scope

TEST(Template_class, double_specialization_test) {
/**
 * @brief double_test function.
 * @param 42 parameter description.
 * @param {1.0f parameter description.
 * @param 2.0f parameter description.
 * @param 3.0f} parameter description.
 * @return Return value description (if any).
 */
    Template_class<double> double_test(42, {1.0f, 2.0f, 3.0f});
    EXPECT_FALSE(double_test.foo());
}  // end scope

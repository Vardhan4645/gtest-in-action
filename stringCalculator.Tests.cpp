#include "stringCalculator.h"
#include <gtest/gtest.h>

TEST(stringCalculator,add_empty(InputString_ZeroIsExpected){
//arrange
string input="";
int expectedValue=0;
//Act
int actualValue=Add(input);
//Assert
ASSERT_EQ(actualalue,expectedValue);

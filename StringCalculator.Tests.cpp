#include "StringCalculator.h"
#include <gtest/gtest.h>

TEST(StringCalculator,add_empty(InputString_ZeroIsExpected){
//arrange
string input="";
int expectedValue=0;
//Act
int actualValue=Add(input);
//Assert
ASSERT_EQ(actualValue,expectedValue);

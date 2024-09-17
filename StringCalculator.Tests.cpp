#include "StringCalculator.h"
#include <gtest/gtest.h>

TEST(StringCalculator,Add_emptyInputString_ZeroIsExpected){
  //Arrange
  string input = "";
  int expectedValue=0;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculator,Add_whensinglenuberispassed_ZeroIsExpected){
//arrange
string input = "0";
int expectedValue=0;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}



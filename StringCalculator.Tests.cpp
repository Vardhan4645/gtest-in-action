#include "StringCalculator.h"
#include <gtest/gtest.h>

TEST(StringCalculator,Add_emptyInputStringispassed_ZeroIsExpected){
  //Arrange
  string input = "";
  int expectedValue=0;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculator,Add_zeroispassed_ZeroIsExpected){
//arrange
string input = "0";
int expectedValue=0;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculator,Add_oneispassed_oneIsExpected){
//arrange
string input = "1";
int expectedValue=1;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}





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

TEST(StringCalculator,Add_passedtwocommadelimednumbers_sumisexpected){
//arrange
string input = "1,5";
int expectedValue=6;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculator,Add_passedmultipledelimednumbers_sumisexpected){
//arrange
string input = "1,5,2";
int expectedValue=8;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculator,Add_whendelimedwithnewlineandcomma_sumisexpected){
//arrange
string input = "4/n,7,8";
int expectedValue=19;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculator,Add_whenpassedadelimed_sumisexpected){
//arrange
string input = "4/n,//n,6;,8";
int expectedValue=14;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}









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

TEST(StringCalculator,oneispassed_oneIsExpected){
//arrange
string input = "1";
int expectedValue=1;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculator,passedtwocommadelimednumbers){
//arrange
string input = "1,5";
int expectedValue=6;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculator,passedmultipledelimednumbers){
//arrange
string input = "1,5,2";
int expectedValue=8;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculator,whendelimedwithnewlineandcomma){
//arrange
string input = "4/n,7,8";
int expectedValue=19;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculator,whenpassedadelimed){
//arrange
string input = "4/n,//n,6;,8";
int expectedValue=18;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculator,whennegativenumbersarepassed){
//arrange
string input = "3,-4,-8,4";
int expectedValue=7;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_THROW(actualValue,invalid_argument);
}

TEST(StringCalculator,whennegativenumbersaregreaterthan1000){
//arrange
string input = "3,-4,-8,1000";
int expectedValue=3;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_THROW(actualValue,ignores_1000);
}











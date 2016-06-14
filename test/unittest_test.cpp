#include "gtest/gtest.h"

TEST(UnitTestTest, Equal){
  EXPECT_EQ(1, 1);
  EXPECT_EQ(2, 2);
  EXPECT_EQ(-1234, -1234);
}

TEST(UnitTestTest, True){
  EXPECT_TRUE(2 == 2);
}

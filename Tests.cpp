#include "main.h"
#include "gtest/gtest.h"

TEST(sum,a_plus_b_7){
    ASSERT_EQ(sum(2, 5), 7);
}

TEST(sum,a_plus_b_8){
    ASSERT_EQ(sum(2, 5), 8);
}
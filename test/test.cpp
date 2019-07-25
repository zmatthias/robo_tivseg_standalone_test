#include <gtest/gtest.h>

TEST(EmptyTest, TrueAndFalse)
{
    bool b = true;
    EXPECT_EQ(b, true);
    EXPECT_NE(b, false);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}

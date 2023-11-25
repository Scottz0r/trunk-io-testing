#include <gtest/gtest.h>

#include "lib/demo.h"

TEST(do_stuff, basic_do_stuff)
{
    auto actual = SZ::do_stuff(12, 4);
    EXPECT_EQ(actual, 6.0);
}

TEST(do_stuff, zero_case)
{
    auto actual = SZ::do_stuff(16, 0);
    EXPECT_EQ(actual, 0.0);
}

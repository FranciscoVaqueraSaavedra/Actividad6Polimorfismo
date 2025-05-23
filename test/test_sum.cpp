#include <gtest/gtest.h>
#include "Suma.h"

TEST(SumTest, HandlesPositiveInput)
{
int suma = sum(1, 5);

EXPECT_EQ(suma, 6);
}

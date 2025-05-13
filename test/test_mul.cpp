#include <gtest/gtest.h>
#include "mul.h"


TEST(MulTest, HandlesPositiveInput)
{
    int multiplicacion = mul(7, 3);

    EXPECT_EQ(multiplicacion, 21);
}

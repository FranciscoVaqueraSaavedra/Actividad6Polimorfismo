#include <gtest/gtest.h>
#include "Multiplicacion.h"


TEST(MulTest, HandlesPositiveInput)
{
    int multiplicacion = mul(7, 3);

    EXPECT_EQ(multiplicacion, 21);
}

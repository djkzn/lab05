#include <gtest/gtest.h>
#include "calc.h"

TEST(Arithm, sum){
	int32_t a=1;
	int32_t b=2;
	int32_t result = sum(a,b);
	EXPECT_EQ(result, 3);
}
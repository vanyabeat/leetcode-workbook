#include <gtest/gtest.h>
#include <iostream>

#include "../src/arrays_workbook.h"

class ArraysTests : public ::testing::Test
{
  protected:
	void SetUp()
	{
		std::cout << "SetUp()" << std::endl;
	}

	void TearDown()
	{
		std::cout << "TearDown()" << std::endl;
	}
};

TEST_F(ArraysTests, twoSum)
{
	auto vec = std::vector<int>{2, 7, 11, 15};
	auto res = ArraysSolution::twoSum(vec, 9);
	ASSERT_EQ(res, (std::vector<int>{0, 1}));
}
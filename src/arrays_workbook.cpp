#include "arrays_workbook.h"

/*
 * Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to
 * target. You may assume that each input would have exactly one solution, and you may not use the same element twice.
 * You can return the answer in any order.
 * Input: nums = [2,7,11,15], target = 9
 * Output: [0,1]
 * Output: Because nums[0] + nums[1] == 9, we return [0, 1].
 */
std::vector<int> ArraysSolution::twoSum(std::vector<int>& nums, int target)
{
	for (size_t i = 0; i < nums.size(); ++i)
	{
		for (size_t j = 0; j < nums.size(); ++j)
		{
			if (i != j)
			{
				if (nums[i] + nums[j] == target)
				{
					return std::vector<int>{int(i), int(j)};
				}
			}
		}
	}
	return {};
}
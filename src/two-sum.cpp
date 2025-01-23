#include "two-sum.hpp"

bool two_sum(
    const int nums[5],
    const int target,
    std::size_t &index0,
    std::size_t &index1)
{
    for (std::size_t i = 0; i < 5; ++i)
    {
        for (std::size_t j = i + 1; j < 5; ++j)
        {
            if (nums[i] + nums[j] == target)
            {
                index0 = i;
                index1 = j;
                return true;
            }
        }
    }
    return false;
}


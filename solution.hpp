#ifndef  SOLUTION_HPP
#define SOLUTION_HPP

#include <functional>
#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int findKthLargest(std::vector<int>& nums, int k){
        std::sort(nums.begin(), nums.end(), std::greater<int>());
        return nums[k-1];
    }
};

#endif // SOLUTION_HPP
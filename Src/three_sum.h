//
// Created by pablo on 12/11/2023.
//

#ifndef THREE_SUM_H
#define THREE_SUM_H
#include <vector>
#include <algorithm>
struct Elements {
    int a,b,c;
};
inline std::vector<Elements> three_sum(std::vector<int> nums) {
    std::vector<Elements> results;
    std::ranges::sort(nums);
    for (int i = 0; i < nums.size() - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }
        int left = i + 1;
        int right = nums.size() - 1;
        while (left < right) {
            int total = nums[i] + nums[left] + nums[right];
            if (total == 0) {
                results.emplace_back(nums[i], nums[left], nums[right]);
                while (left < right) {
                    if (nums[left] == nums[left + 1]) {
                        left++;
                    }
                    if (nums[right] == nums[right - 1]) {
                        right--;
                    }
                    left++;
                    right--;
                }
            }
            else if (total < 0) {
                left++;
            }
            else {
                right--;
            }
        }
    }
    return results;
}
#endif //THREE_SUM_H

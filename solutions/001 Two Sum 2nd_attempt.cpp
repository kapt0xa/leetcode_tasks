//
// https://leetcode.com/problems/two-sum/description/
// second atempt
// got rid of sorting
// memory O(N)
// time O(N)
//

class Solution {
public:
    vector<int> twoSum(const vector<int>& nums, int target) {
        unordered_map<int, int> expected; // the table contains "expected value" -> "index of value" that would pair with it
        expected.reserve(nums.size());

        for(int i = 0; i != static_cast<int>(nums.size()); ++i)
        {
            int current = nums[i];
            auto&& found = expected.find(current);

            if(found == expected.end()) // not found
            {
                expected[target - current] = i;
            }
            else
            {
                return {found->second, i};
            }
        }
        assert(false);
    }
};

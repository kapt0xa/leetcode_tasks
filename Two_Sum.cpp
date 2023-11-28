class Solution {
public:
    vector<int> twoSum(const vector<int>& nums, int target) {
        vector<int> indexes(nums.size());
        iota(indexes.begin(), indexes.end(), 0);

        sort(indexes.begin(), indexes.end(), 
        [&nums](int l, int r)
        {
            return nums[l] < nums[r];
        });

        int l = 0;
        int r = static_cast<int>(nums.size()) - 1;
        while(true)
        {
            int sum = nums[indexes[l]] + nums[indexes[r]];
            if(sum < target)
            {
                ++ l;
                continue;
            }
            if(sum != target) // sum > target
            {
                --r;
                continue;
            }
            return {indexes[l], indexes[r]};
        }
    }
};

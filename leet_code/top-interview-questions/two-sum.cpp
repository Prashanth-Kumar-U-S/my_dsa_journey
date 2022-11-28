// https://leetcode.com/problems/two-sum/description/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++)
        {
            if(mp.find(nums[i]) != mp.end()) // If number is presnet in map
            {
                return {mp[nums[i]], i};
            }
            else
            {
                int diff = target - nums[i];
                mp.insert({diff, i});
            }
        }
        return {};
    }
};

// 3Sum
// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] where nums[i] + nums[j] + nums[k] == 0, and the indices i, j and k are all distinct.
// The output should not contain any duplicate triplets. You may return the output and the triplets in any order.
// Example 1:
// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation:

// nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
// nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
// nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
  
// The distinct triplets are [-1,0,1] and [-1,-1,2].

========================== Brut Force ===================================
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> result;
        sort(nums.begin(), nums.end()); //sort the vector
        for(int i=0; i< nums.size(); ++i) {
            for(int j = i+1; j < nums.size(); ++j) {
                for(int k = j+1; k < nums.size(); ++k) {
                    if(nums[i]+nums[j]+nums[k] == 0) {
                        result.insert({nums[i],nums[j],nums[k]});
                    }
                }
            }
        }
        return vector<vector<int>>(result.begin(), result.end());
    }
};

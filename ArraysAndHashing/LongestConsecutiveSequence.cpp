// Longest Consecutive Sequence
// Given an array of integers nums, return the length of the longest consecutive sequence of elements that can be formed.

// A consecutive sequence is a sequence of elements in which each element is exactly 1 greater than the previous element. The elements do not have to be consecutive in the original array.

// You must write an algorithm that runs in O(n) time.

// Example 1:

// Input: nums = [2,20,4,10,3,4,5]

// Output: 4
// Explanation: The longest consecutive sequence is [2, 3, 4, 5].

// Example 2:

// Input: nums = [0,3,2,5,4,6,1,1]

// Output: 7
// Constraints:

// 0 <= nums.length <= 1000
// -10^9 <= nums[i] <= 10^9

=========================== Brut force will be to check each element and find the sequence per element ============================

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res = 0;
        unordered_set<int> numset (nums.begin(), nums.end());

        for(int num: nums) {
            int longeststreak = 0;
            int curr = num;
            while(numset.find(curr)!=numset.end()) {
                longeststreak++; //add since set end is not reached means num is in set
                curr++; //increase number to find in set
            }
            if(res<longeststreak) res= longeststreak;
        }
        return res;
    }
};

===================================== But above we do unnecessary checks ======================================================
===========================lets find the number and decide if this is the start of the sequence ===============================

int longestConsecutive(vector<int>& nums) {
        int res = 0;
        unordered_set<int> numset (nums.begin(), nums.end());

        for(int num: numset) {
            if(numset.find(num-1)==numset.end()) { //if the map has no less than this (this is the start)
                int longeststreak = 1;
                int curr = num;
                while(numset.find(curr+1)!=numset.end()) {
                    longeststreak++; //add since set end is not reached means num is in set
                    curr++; //increase number to find in set
                }
                if(res<longeststreak) res= longeststreak;
            }
        }
        return res;
    }
    

// Contains Duplicate
// Solved 
// Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.

// Example 1:

// Input: nums = [1, 2, 3, 3]

// Output: true

// Example 2:

// Input: nums = [1, 2, 3, 4]

// Output: false

#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <unordered_map>
#include <stack>

using namespace std;

bool duplicate(vector<int>& nums) {
    unordered_map<int,int> numsMap; //value, index
    for(int i=0; i<nums.size(); ++i) {
        if(numsMap.find(nums[i])!=numsMap.end()) {
            return true;
        }
        numsMap[nums[i]] = i;
    }
    return false;        
}



// Main function to test Singleton
int main() {
    vector<int> vec = {1,2,3,4,5};
    bool result = duplicate(vec);
   
    cout << "Result is " << result  << "\n";
   
    return 0;
}

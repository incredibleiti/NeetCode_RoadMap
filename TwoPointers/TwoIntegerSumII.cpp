// Two Integer Sum II
// Given an array of integers numbers that is sorted in non-decreasing order.
// Return the indices (1-indexed) of two numbers, [index1, index2], such that they add up to a given target number target and index1 < index2. Note that index1 and index2 cannot be equal, therefore you may not use the same element twice.
// There will always be exactly one valid solution.

// Your solution must use 
// O(1)
// O(1) additional space.

// Example 1:
// Input: numbers = [1,2,3,4], target = 3
// Output: [1,2]
// Explanation:
// The sum of 1 and 2 is 3. Since we are assuming a 1-indexed array, index1 = 1, index2 = 2. We return [1, 2].

// Constraints:
// 2 <= numbers.length <= 1000
// -1000 <= numbers[i] <= 1000
// -1000 <= target <= 1000

========================================================================================================================
  =================================== Brut Force======================================================================

  #include <iostream>
#include <vector>
#include <memory>
#include <algorithm>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> result;
    for(int i=0; i< numbers.size(); ++i) {
        int curr = numbers[i];
        int j = i+1;
        while (j>i && j < numbers.size()) {
            if(target - curr == numbers[j]) {
                result.push_back(i+1);
                result.push_back(j+1);
                return result;
            }
            j++;
        }
    }
    return result;
}
    
int main()
{
    vector<int> dummy = {2,3,4,5,6,7,8};
    vector<int> returnval = twoSum(dummy,8);
    for(auto val : returnval) {
        cout << "values: " << val << endl;
    }
    cout << "end of program" << endl;
    return 0;
}

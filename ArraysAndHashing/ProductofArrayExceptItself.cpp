// Products of Array Except Self
// Given an integer array nums, return an array output where output[i] is the product of all the elements of nums except nums[i].

// Each product is guaranteed to fit in a 32-bit integer.

// Follow-up: Could you solve it in 
// O
// (
// n
// )
// O(n) time without using the division operation?

// Example 1:

// Input: nums = [1,2,4,6]

// Output: [48,24,12,8]
// Example 2:

// Input: nums = [-1,0,1,2,3]

// Output: [0,-6,0,0,0]
// Constraints:

// 2 <= nums.length <= 1000
// -20 <= nums[i] <= 20

========================================================  Brut force ========================================================
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
        vector<int> res(n);

        for (int i = 0; i < n; i++) {
            int prod = 1;
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    prod *= nums[j];
                }
            }
            res[i] = prod;
        }
        return res;
}

================================================================================================================================
=========================================================== Using Division Logic ===============================================
================================================================================================================================

===================== For positive numbers just calculate prodyct and push in vector all divident value =====================
===================== Can use the same array and then change values =========================================================
============ For zeros needs better handling, if there are more than zeros, all values zero else only non zero value has product rest have zero===============
    
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int zero = 0;
        vector<int> result = nums;
        for (int i= 0; i <nums.size(); ++i) {
            if(nums[i]!=0) {
                product*=nums[i];
                cout << "product is " << product << endl;
            } else {
                zero += 1;
            }
        }
        if(zero>1) {
            product = 0;
        }
        cout << "final product is " << product << endl;

        for(int i=0;i<result.size();++i) {
            if(result[i]!=0) {
                result[i] = (product/result[i]);
                
            } else {
                std::fill(result.begin(), result.end(),0);
                result[i] = product;
                break;
            }
        }
        return result;}
};



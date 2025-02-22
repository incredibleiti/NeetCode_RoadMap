// Binary Search
// You are given an array of distinct integers nums, sorted in ascending order, and an integer target.

// Implement a function to search for target within nums. If it exists, then return its index, otherwise, return -1.

// Your solution must run in 
// O
// (
// l
// o
// g
// n
// )
// O(logn) time.

// Example 1:

// Input: nums = [-1,0,2,4,6,8], target = 4

// Output: 3
// Example 2:

// Input: nums = [-1,0,2,4,6,8], target = 3

// Output: -1

========================================= Brut Force ================================================================

  /******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

using namespace std;

int bsearch(int left, int right,vector<int>&nums, int target) {
    if(left > right) return -1;
    int mid = (left + right)/2;
    
    cout << "middle point is " << mid << endl;
        
    if(target > nums[mid]) {
        left = mid + 1;
        cout << "left is " << left << " right is " << right << endl;
        return bsearch(left, right, nums, target);
    } else if(target < nums[mid]) {
        right = mid - 1;
        cout << "left is " << left << " right is " << right << endl;
        return bsearch(left, right, nums, target);
    } else {
        return mid;
    }
}

int search(vector<int>& nums, int target) {
        int len = nums.size();
        int r = len-1;
        return bsearch(0, r, nums, target);
}



int main()
{
    vector<int> in = {1,2,3,4,5,6,7,8};
    auto val = search(in, 6);
    
    std::cout<<"Value of target is: " << val;

    return 0;
}

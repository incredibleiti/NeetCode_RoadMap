You are given an integer array heights where heights[i] represents the height of the 
You may choose any two bars to form a container. Return the maximum amount of water a container can store.

Input: height = [1,7,2,5,4,7,3,6]

Output: 36
Example 2:

Input: height = [2,2,2]

Output: 4

===================== Brut Force ===================================

  /******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

int maxArea(vector<int>& heights) {
        int max = 0;
        if(heights.size() == 0) return max;
        for(int i =0; i < heights.size(); ++i) {
            for(int j = i+1; j < heights.size(); ++j) {
                int vol = 1;
                int temp = (j-i);
                if(heights[i] < heights[j]) {
                    vol = heights[i] * temp;
                } else if(heights[i] > heights[j]) {
                    vol = heights[j] * temp;
                } else {
                    vol = heights[i] * temp;
                }
                if(max < vol)
                {
                    max = vol;
                    cout << "the max is " << max << endl;
                }
            }
        }
        return max;        
    }

int main()
{
    vector<int> nums = {2,2,2};
    auto result = maxArea(nums);
    
    std::cout<<"Result is " << result << endl;

    return 0;
}

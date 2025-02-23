// Valid Palindrome
// Given a string s, return true if it is a palindrome, otherwise return false.

// A palindrome is a string that reads the same forward and backward. It is also case-insensitive and ignores all non-alphanumeric characters.

// Example 1:

// Input: s = "Was it a car or a cat I saw?"

// Output: true
// Explanation: After considering only alphanumerical characters we have "wasitacaroracatisaw", which is a palindrome.

// Example 2:

// Input: s = "tab a cat"

// Output: false
// Explanation: "tabacat" is not a palindrome.

// Constraints:

// 1 <= s.length <= 1000
// s is made up of only printable ASCII characters.


/******************************************************************************

Brut Force

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

using namespace std;

bool isPalindrome(string s) {
    string scopy = s;
    reverse(scopy.begin(), scopy.end());
    return s==scopy;
}
    
int main()
{
    auto val = isPalindrome("abcddcba?");
    
    std::cout<<"String is Palindrome? " << val;

    return 0;
}

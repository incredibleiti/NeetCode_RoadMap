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

====================== But above will fail for non alphanmeric characters since we have to ignore them=================================

bool isPalindrome(string s) {
    string scopy = "";
        for(char c: s) {
            if(isalnum(c)) {
            scopy+=tolower(c);
        }
    }
    return scopy == string(scopy.rbegin(), scopy.rend());    
}


==================== You can also loop over using two pointers ========================================================================

bool isPalindrome(string s) {

string newstring = "";
for(char c : s) {
    if(isalnum(c)) {
        newstring+=tolower(c);
    }
}

cout << "new string is " << newstring << endl;

int lptr = 0;
int rptr = newstring.size()-1;

while(lptr<=rptr) {
    if(newstring[lptr] == newstring[rptr]) {
        lptr++;
        rptr--;
    } else {
        return false;
    }
}

    ============================== Avoiding extra copy of string and looping over same string==============================================

bool isPalindrome(string s) {
    int lptr = 0;
int rptr = s.size()-1;

//we add no new string to avoid copying and use the given string s

while(lptr < rptr) {
    if(!isalnum(s[lptr])) {
        lptr++;
        continue;
    }
    if(!isalnum(s[rptr])) {
        rptr--;
        continue;
    }
    if(tolower(s[lptr]) == tolower(s[rptr])) {
        lptr++;
        rptr--;
    } else {
        return false;
    }
}


Time Complexity	O(n) (linear)
Space Complexity	O(1) (constant)
return true; 
}


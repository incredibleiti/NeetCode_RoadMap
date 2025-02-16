// An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

// Example 1:

// Input: s = "racecar", t = "carrace"

// Output: true
// Example 2:

// Input: s = "jar", t = "jam"

// Output: false
// Constraints:

// s and t consist of lowercase English letters.

/////////////////////////Brut Force///////////////////////////////

bool isAnagram(string s, string t) {
    if(s.size()!=t.size()) {
        return false;
    }
    sort(s.begin(), s.end());
    sort(t.begin(),t.end());
    return s == t;
}

// Given an array of strings strs, group all anagrams together into sublists. You may return the output in any order.

// An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

// Example 1:

// Input: strs = ["act","pots","tops","cat","stop","hat"]

// Output: [["hat"],["act", "cat"],["stop", "pots", "tops"]]
// Example 2:

// Input: strs = ["x"]

// Output: [["x"]]
// Example 3:

// Input: strs = [""]

// Output: [[""]]
// Constraints:

// 1 <= strs.length <= 1000.
// 0 <= strs[i].length <= 100
// strs[i] is made up of lowercase English letters.

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> stringMap;
        for(const auto& s: strs) {
            string sortstring = s;
            sort(sortstring.begin(), sortstring.end()); //sorted
            //add in unordered map
            stringMap[sortstring].push_back(s); //add key(sorted), actual values
        }
        vector<vector<string>> result;
        for(auto& pairval : stringMap) {
            result.push_back(pairval.second);
        }

        return result;
    }
};

======================= Above algorithm is oke, but yes expensive since sorting best algorithm can be nlogn (merge sort), and m times so m nlogn
one can avoid this and use HashTable (using 26 as index and loop over character in string and if count is zero means anagram.

https://neetcode.io/problems/anagram-groups

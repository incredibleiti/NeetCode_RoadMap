// Encode and Decode Strings
// Design an algorithm to encode a list of strings to a single string. The encoded string is then decoded back to the original list of strings.

// Please implement encode and decode

// Example 1:

// Input: ["neet","code","love","you"]

// Output:["neet","code","love","you"]
// Example 2:

// Input: ["we","say",":","yes"]

// Output: ["we","say",":","yes"]
// Constraints:

// 0 <= strs.length < 100
// 0 <= strs[i].length < 200
// strs[i] contains only UTF-8 characters.
============================================Brut Force=================================================
===========================================Works but fails for double digit length ====================
#include <iostream>
#include <memory>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

string encode(vector<string>& strs) {

    string result = "";

    for(int i=0; i<strs.size(); ++i) {
        result.append(to_string(strs[i].size()) + strs[i]);
    }
    return result;

}

vector<string> decode(string s) { //5hello5world11
    vector<string> res;
    int i =0;
    while(i < s.size()) {
        int len = s[i] - '0';        
        string sub = s.substr(i+1, len);        
        res.push_back(sub);
        i+=(len + 1);
    }
    return res;
}

// Main function to test Singleton
int main() {
    vector<string> encoded = {"hello", "world", "1"};
    auto res = encode(encoded);
    vector<string> outp = decode(res);
    for(auto val : outp) {
        cout <<"printing the decoded" << val << "\n";
    }

    return 0;
}

=====================Fixing double digit===============================
    
string encode(vector<string>& strs) {

    string result = "";

    for(int i=0; i<strs.size(); ++i) {
        result.append(to_string(strs[i].size()) + "#" + strs[i]); // add a delimiter to make sure "10Rvsdsgad" is read as "10 length instead of "1" 0Rvsdsgad
    }
    return result;

}

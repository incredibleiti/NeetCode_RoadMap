// Top K Frequent Elements
// Given an integer array nums and an integer k, return the k most frequent elements within the array.

// The test cases are generated such that the answer is always unique.

// You may return the output in any order.

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> numsMap;
    for (auto val : nums) {
        numsMap[val]++; //addds key and occurence        
    }
    //loop over the map and add pair
    vector<pair<int,int>> res;
    for(const auto& v: numsMap) {
        res.push_back({v.second, v.first}); //occurence, value
    }
    sort(res.rbegin(), res.rend()); //if you will not reverse sort, results might not be the same (we need descendiung)

    for(const auto& v: res) {       
        cout << v.second << " " << v.first;
    }

    vector<int> result;
    for(int i =0; i<k; ++i) {
        result.push_back(res[i].second);
    }
    return result;
}

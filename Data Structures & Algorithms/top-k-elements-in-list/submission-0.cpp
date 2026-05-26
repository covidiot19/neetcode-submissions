class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;

        for(auto x : nums) {
            ++m[x];
        }

        vector<vector<int>> buckets(nums.size() + 1);

        for(auto x : m) {
            buckets[x.second].push_back(x.first);
        }

        vector<int> result;

        for(int i = nums.size(); i >= 0 && result.size() < k; i--) {
            for(auto x : buckets[i]) {
                result.push_back(x);
                if(result.size() == k) break;
            }
        }

        return result;
    }
};
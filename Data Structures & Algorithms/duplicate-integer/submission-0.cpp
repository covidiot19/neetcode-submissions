class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;

        for(auto x : nums){
            ++m[x];
        }

        for(auto v : m){
            if(v.second > 1){
                return true;
            }
        }
        return false;
    }
};
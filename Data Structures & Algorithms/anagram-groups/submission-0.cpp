class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output;
        unordered_map<string, vector<string>> m;
        
        for(auto x : strs){
            string temp = x;
            sort(x.begin(), x.end());
            m[x].push_back(temp);
        }

        for(auto p : m){
            output.push_back(p.second);
        }

        return output;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<int, int> sm, tm;
        for(auto x : s){
            ++sm[x];
        }
        for(auto x : t){
            ++tm[x];
        }
        for(auto const& [key, val] : sm){
            if(sm[key] == tm[key]){
                continue;
            } else {
                return false;
            }
        }
        return true;
    }
};

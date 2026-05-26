class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int, int> sm, tm;

        for(auto x : s){
            ++sm[x - 'a'];
        }

        for(auto v : t){
            ++tm[v - 'a'];
        }

        for(int i = 0; i < 26; i++){
            if(sm[i] != tm[i]){
                return false;
            }
        }
        return true;
    }
};

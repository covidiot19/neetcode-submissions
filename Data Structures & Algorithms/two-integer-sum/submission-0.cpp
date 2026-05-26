class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;

        for(int i = 0; i < nums.size(); i++){
            int num_to_find = target - nums[i];
            if(m.find(num_to_find) != m.end()){
                return{m[num_to_find], i};
            }
            else{
                m[nums[i]] = i;
            }
        }
    }
};

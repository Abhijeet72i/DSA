class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i =0;i<nums.size();i++){
            int diff =  target-nums[i];
            if(mp.find(diff)!=mp.end()){
                return {i,mp[diff]};
            }
            else{
            mp[nums[i]] = i;
            }
        }
        return {};
    }
};
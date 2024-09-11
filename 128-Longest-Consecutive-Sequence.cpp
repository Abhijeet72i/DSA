class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        unordered_set<int> mp(nums.begin(),nums.end());
        for(int i =0;i<nums.size();i++){
            if(mp.find(nums[i]-1)!=mp.end()){
                continue;
            }
            else{
                int count = 0;
                int curr = nums[i];
                while(mp.find(curr)!=mp.end()){
                    count++;
                    curr++;
                }
                ans = max(count,ans);

            }
        }
        return ans;
    }
};
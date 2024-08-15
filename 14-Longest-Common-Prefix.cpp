class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string ans = strs[0];
        for(int i =1;i<n;i++){
            int j;
            for(j=0;j<strs[1].size();j++){
                if(ans[j]!=strs[i][j]){
                    break;
                }
            }
ans = ans.substr(0,j);
if(ans == "")
return ans;

        }
        return ans;
    }
};
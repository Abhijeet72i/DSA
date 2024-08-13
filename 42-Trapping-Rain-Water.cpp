class Solution {
public:
    int trap(vector<int>& height) {
       int n= height.size();
     
        vector<int>ls(n);
        vector<int>rs(n);
        int x=INT_MIN;
        for(int i=0;i<n;i++)
        {
            x= max(height[i],x);
            ls[i]=x;
        }
        x=INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            x= max(height[i],x);
            rs[i]=x;
        }
        //reverse(rs.begin(),rs.end());
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+= min(ls[i],rs[i]) - height[i];
        }

        return ans;
    
    }
};
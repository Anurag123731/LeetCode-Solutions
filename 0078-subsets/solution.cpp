class Solution {
public:
   void helper(vector<int>&nums,vector<int>ans,vector<vector<int>>&fans,int idx){
        if(idx==nums.size()){
            fans.push_back(ans);
            return;
        }
        helper(nums,ans,fans,idx+1);
        ans.push_back(nums[idx]);
        helper(nums,ans,fans,idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>> fans;
        helper(nums,ans,fans,0);
        return fans;

    }
};

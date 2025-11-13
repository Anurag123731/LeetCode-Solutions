class Solution {
public:
void subset(vector<int>&nums,int i,vector<int>ans,vector<vector<int>>&fans,int n){
    if(i==nums.size()){
        fans.push_back(ans);
        return ;
    }
    subset(nums,i+1,ans,fans,n);
    ans.push_back(nums[i]);
    subset(nums,i+1,ans,fans,n);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        vector<vector<int>>fans;
        subset(nums,0,ans,fans,n);
        return fans;
    }
};

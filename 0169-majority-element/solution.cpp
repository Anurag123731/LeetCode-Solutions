class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int frequency=0;
        int ans=0;
        for(int i=0;i<=nums.size()-1;i++){
            if(frequency==0){
                ans=nums[i];
            }
            if(nums[i]==ans) frequency++;
            else frequency--;
        }
        return ans;
    }
};

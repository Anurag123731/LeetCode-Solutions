class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int actual_sum=(n*(n+1))/2;
        int obtained_sum=0;
        for(int i=0;i<=n-1;i++){
            obtained_sum+=nums[i];
        }
       return actual_sum-obtained_sum;
    }
};

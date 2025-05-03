class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int cr_sum=0;
        int max_sum=INT_MIN;
        for(int i=0;i<=n-1;i++){
            cr_sum+=nums[i];
            max_sum=max(cr_sum,max_sum);
            if(cr_sum<0){
                cr_sum=0;
            }
        }
        return max_sum;
    }
};

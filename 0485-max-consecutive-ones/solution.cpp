class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount=0;
        for(int i=0;i<nums.size();i++){
            int maxelement=0;
            while(i<nums.size()&&nums[i]==1){
                 maxelement++;
                 i++;
            }
                maxcount=max(maxcount,maxelement);
        }
        return maxcount;
    }
};

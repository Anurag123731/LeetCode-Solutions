class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int flips=0,i=0,j=0,maxlength=INT_MIN,length=INT_MIN;
        while(j<n){
            if(nums[j]==1) j++;
            else{
                if(flips<k){
                    flips++;
                    j++;
                }
                else{
                    length=j-i;
                    maxlength=max(maxlength,length);
                    while(nums[i]==1) i++;
                    i++;
                    j++;
                }
            }
        }
         length=j-i;
         maxlength=max(maxlength,length);
        return maxlength;
    }
};

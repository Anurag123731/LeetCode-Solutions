class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
            int correct_idx= nums[i]-1;
            if(nums[i]==i+1 || nums[i]==nums[correct_idx]) i++;
            else swap(nums[i],nums[correct_idx]) ;
        } 
        vector<int>v;
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1) v.push_back(i+1);
        }  
        return v;
    }
};

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
         vector<int>prep(n);
         prep[0]=1;
         int product=nums[0];
         //prefix product array 
         for(int i=1;i<n;i++){
            prep[i]=product;
            product*=nums[i];
         }
         product=nums[n-1];
         vector<int>sufp(n);
          sufp[n-1]=1;
         for(int i=n-2;i>=0;i--){
            sufp[i]=product;
            product*=nums[i];
         }
         vector<int>ans(n);
         for(int i=0;i<=n-1;i++){
            ans[i]=sufp[i]*prep[i];
         }
         return ans;
    }
};

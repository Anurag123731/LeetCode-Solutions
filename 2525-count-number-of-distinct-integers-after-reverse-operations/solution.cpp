class Solution {
public:
    int revs(int n){
        int rev=0;
        while(n>0){
        int r=n%10;
        rev=rev*10+r;
        n/=10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int rev=revs(nums[i]);
            nums.push_back(rev);
        }
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        return s.size();
    }
};

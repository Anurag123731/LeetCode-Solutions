class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        vector<int>v;
        for(int i=0;i<=nums.size()-1;i++){
            int no=target-nums[i];
            if(m.find(no)!=m.end()){
                v.push_back(m[no]);
                v.push_back(i);
            }
            else{
                m[nums[i]]=i;
            }
        }
        return v;
    }
};

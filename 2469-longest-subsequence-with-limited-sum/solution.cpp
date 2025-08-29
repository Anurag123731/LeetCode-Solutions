class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
    int n=nums.size();
    int m=queries.size();
    sort(nums.begin(),nums.end());
    vector<int>ans;
    for(int j=0;j<m;j++){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum>queries[j]){
                ans.push_back(i);
                break;
            }
            if(i==n-1 && sum<=queries[j]){
                ans.push_back(i+1);
            }
        }
    }
    return ans;
    }
};

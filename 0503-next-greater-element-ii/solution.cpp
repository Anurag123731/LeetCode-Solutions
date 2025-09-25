class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        int n=nums.size();
        vector<int>v(n,-1);
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[n-1]){
                v[n-1]=nums[i];
                break;
            }
        }
        st.push(nums[n-1]);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && st.top()<=nums[i]) st.pop();
            if(st.size()==0){
                for(int j=0;j<n;j++){
                    if(nums[j]>nums[i]){
                        v[i]=nums[j];
                        break;
                    }
                    if(j==i-1) v[i]=-1;
                }
            }
            else v[i]=st.top();
            st.push(nums[i]);
        }
        return v;

    }
};

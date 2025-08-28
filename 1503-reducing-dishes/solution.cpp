class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int n=satisfaction.size();
        int sum=0;
        int maxsum=0;
        int idx=-1;
        for(int i=n-1;i>=0;i--){
            sum+=satisfaction[i];
            if(sum>=0){
                maxsum=sum;
                idx=i;
            }
            else break;
        }
        if(idx==-1) return 0;
        int t=1;
        int ans=0;
        for(int i=idx;i<=n-1;i++){
             ans+=satisfaction[i]*t;
             t++;
        }
        return ans;
    }
};

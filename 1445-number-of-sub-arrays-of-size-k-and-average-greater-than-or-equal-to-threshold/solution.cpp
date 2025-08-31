class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int sum=0;
        int ans=0;
        int i=0,j=0;
        while(j<n){
            sum+=arr[j];
            if(j-i+1==k){
                if(sum/k>=threshold){
                    ans++;
                }
                sum-=arr[i];
                i++;
            }
            j++;
        }
        return ans;
    }
};

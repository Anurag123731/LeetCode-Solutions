class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int>nse(n);
        nse[n-1]=0;
        stack<int>st;
        st.push(prices[n-1]);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && prices[i]<st.top()) st.pop();
            if(st.size()==0) nse[i]=0;
            else nse[i]=st.top();
            st.push(prices[i]);
        }
        for(int i=0;i<=n-1;i++){
            prices[i]=prices[i]-nse[i];
        }
        return prices;

    }
};

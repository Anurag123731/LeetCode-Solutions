class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int>st;
        vector<int>nsi(n);
        nsi[n-1]=n;
        st.push(n-1);

        for(int i=n-2;i>=0;i--){
            // next smaller idx
                while(st.size()>0 && heights[st.top()]>=heights[i]) st.pop();
                if(st.size()==0) nsi[i]=n;
                else nsi[i]=st.top();
                st.push(i);
        }
        while(st.size()>0) st.pop();
            //previous smaller elemetn idx
        vector<int>psi(n);
        psi[0]=-1;
        st.push(0);
            for(int i=1;i<n;i++){
                while(st.size()>0 && heights[st.top()]>=heights[i]) st.pop();
                if(st.size()==0) psi[i]=-1;
                else psi[i]=st.top();
                st.push(i);
            }
        int maxarea=0;
        for(int i=0;i<n;i++){
            int area=heights[i]*(nsi[i]-psi[i]-1);
            maxarea=max(maxarea,area);
        }
        return maxarea;

        
    }
};

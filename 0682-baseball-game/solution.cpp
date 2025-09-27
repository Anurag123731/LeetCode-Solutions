class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int ans=0;
        for(int i=0;i<=operations.size()-1;i++){
            if(operations[i]=="C"){
                int n=st.top();
                st.pop();
                ans-=n;
            } 
            else if(operations[i]=="D"){
                int m=st.top();
                st.push(2*m);
                ans+=st.top();
            }
            else if(operations[i]=="+"){
                int m=st.top();
                st.pop();
                int n=st.top();
                st.push(m);
                st.push(m+n);
                ans+=m+n;
            }
            else{
                st.push(stoi(operations[i]));
                ans+=st.top();
            }
        }
        return ans;
    }
};

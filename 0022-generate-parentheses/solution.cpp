class Solution {
public:
    void parenthesis(vector<string>&ans,string str,int o,int c,int n){
    if(c==n){
        ans.push_back(str);
    }
    if (o<n) parenthesis(ans,str+'(',o+1,c,n);
    if (c<o) parenthesis(ans,str+')',o,c+1,n);

}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string str="";
         parenthesis(ans,str,0,0,n);
         return ans;
    }
};

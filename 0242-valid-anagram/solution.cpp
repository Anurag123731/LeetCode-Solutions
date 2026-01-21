class Solution {
public:
    bool isAnagram(string s, string t) {
      if(s.length()!=t.length()) return false;
        unordered_map<char,int>ms;
        unordered_map<char,int>mt;
        for(int i=0;i<s.length();i++){
            ms[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            mt[t[i]]++;
        }
        for(auto x:ms){
            char ch1=x.first;
            int freq1=x.second;
            if(mt.find(ch1)!=mt.end()){
                int freq2=mt[ch1];
                if(freq1!=freq2){
                    return false;
                }
            }
            else return false;
        }
        return true;
    }
};

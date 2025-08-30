class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();
        int prevloss=0;
        for(int i=0;i<minutes;i++){
            if(grumpy[i]==1) prevloss+=customers[i];
        }
        int maxloss=prevloss;
        int idx=0;
        int i=1;
        int j=minutes;
        while(j<n){
            int currloss=prevloss;
            if(grumpy[i-1]==1) currloss-=customers[i-1];
            if(grumpy[j]==1) currloss+=customers[j];
            if(currloss>maxloss){
                maxloss=currloss;
                idx=i;
            }
             i++;
            j++;
            prevloss=currloss;
        }
        //filling 0s in the grumpy array
        for(int i=idx;i<idx+minutes;i++){
            grumpy[i]=0;
        }
        // max satisfaction
        int sum=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0) sum+=customers[i];
        }
        return sum;

    }
};

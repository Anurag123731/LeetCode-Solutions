class Solution {
public:
    int bestClosingTime(string customers) {
        int n =customers.size();
        int pre[n+1];
        pre[0]=0;
        int pen=0;
        for(int i=1;i<=n;i++){
            pre[i]=pen;
            if(customers[i-1]=='N') pen++;
        }
        pen=0;
        int suf[n+1];
        suf[n]=0;
        for(int i=n-1;i>=0;i--){
            if(customers[i]=='Y') pen++;
            suf[i]=pen;
        }
        int penalty[n+1];
        for(int i=0;i<=n;i++){
            penalty[i]=pre[i]+suf[i];
        }
        int min=penalty[0];
        for(int i=1;i<=n;i++){
            if(penalty[i]<min) min=penalty[i];
        }
        int hour=-1;
        for(int i=0;i<=n;i++){
            if(penalty[i]==min) {
                 hour=i;
                 break;
            }
        }
        return hour;
    }
};

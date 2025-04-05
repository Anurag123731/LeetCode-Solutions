class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        // previous greatest element array.
        vector<int>prev(n);
        prev[0]=-1;   
        int max=height[0];
        for(int i=1;i<=n-1;i++){
            prev[i]=max;
            if(height[i]>max){
                max=height[i]; 
            }
        }
        // find next greatest element array.
          vector<int>next(n);
        next[n-1]=-1;   
        max=height[n-1];
        for(int i=n-2;i>=0;i--){
            next[i]=max;
            if(height[i]>max){
                max=height[i]; 
            }
          
                }
                  //finding minimum array.
            vector<int>mini(n);
            for(int i=0;i<=n-1;i++){
                mini[i]=min(prev[i],next[i]);}

            // calculating the volume of water.
            int water=0;
            for(int i=1;i<=n-2;i++){
                if(height[i]<mini[i]){
                    water+=(mini[i]-height[i]);
                }
                
            }
            return water;
        
    }
};

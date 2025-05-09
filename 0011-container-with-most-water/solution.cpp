class Solution {
public://O(n)
    int maxArea(vector<int>& height) {
       int low=0;
       int high=height.size()-1;
       int max_water=0;
       while(low<high){
        int width=high-low;
        int ht=min(height[low],height[high]);
        int curr_water=width*ht;
        max_water=max(max_water,curr_water);
        if(height[low]<height[high]) low++;
        else high--;
       }
        return max_water;
    }
};

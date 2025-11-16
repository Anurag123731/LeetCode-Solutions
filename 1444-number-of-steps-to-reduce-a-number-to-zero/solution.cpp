class Solution {
public:
    int helper(int num,int count){
        if(num==0) return count;
        if(num%2==0){
            count++;
            return helper(num/2,count);
    }
        else{
            num-=1;
            count++;
            return helper(num,count);
    }
    
}

    int numberOfSteps(int num) {
        return helper(num,0);
    }
};

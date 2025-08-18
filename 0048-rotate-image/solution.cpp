class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       int n=matrix.size();
       //transpose
       for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
       }
       //reverse
       for(int k=0;k<=n-1;k++){
        int i=0;int j=n-1;
        while(i<=j){
            swap(matrix[k][i],matrix[k][j]);
            i++;
            j--;
        }
       }

    }
};

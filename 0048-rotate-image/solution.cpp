class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix.size();
        for(int i=0;i<=m-1;i++){
            for(int j=i+1;j<=m-1;j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        for(int k=0;k<=m-1;k++){
            int i=0;
            int j=m-1;
            while(i<j){
                int temp=matrix[k][i];
                matrix[k][i]=matrix[k][j];
                matrix[k][j]=temp;
                i++;
                j--;
            }
            }
             return;
        }
       
        
    };

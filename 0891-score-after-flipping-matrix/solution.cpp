class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        // Step 1: Flip rows if the first column element is 0
        for (int i = 0; i < m; i++) {
            if (grid[i][0] == 0) { // flip
                for (int j = 0; j < n; j++) {
                    if (grid[i][j] == 0)
                        grid[i][j] = 1;
                    else
                        grid[i][j] = 0;
                }
            }
        }

        // Step 2: Flip columns if there are more 0s than 1s
        for (int j = 1; j < n; j++) {
            int noz = 0;
            int noo = 0;
            for (int i = 0; i < m; i++) {
                if (grid[i][j] == 0)
                    noz++;
                else
                    noo++;
            }
            if (noz > noo) { // flip
                for (int i = 0; i < m; i++) {
                    if (grid[i][j] == 0)
                        grid[i][j] = 1;
                    else
                        grid[i][j] = 0;
                }
            }
        }

        // Step 3: Calculate the score
        int sum = 0;
        for (int i = 0; i < m; i++) {
            int x = 1;
            for (int j = n - 1; j >= 0; j--) {
                sum += grid[i][j] * x; // NOTE: 'a' is undefined – you probably meant grid[i][j]
                x *= 2;
            }
        }

        return sum;
    }
};


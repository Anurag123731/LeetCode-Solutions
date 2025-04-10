class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>a(n,vector<int>(n));
       

    int minr = 0, minc = 0;
    int maxr = n - 1, maxc = n - 1;
    int x = 1;

    while (minr <= maxr && minc <= maxc) {
        for (int j = minc; j <= maxc; j++) {
            a[minr][j] = x;
            x++;
        }
        minr++;

        if (minr > maxr || minc > maxc) break;

        for (int i = minr; i <= maxr; i++) {
            a[i][maxc] = x;
            x++;
        }
        maxc--;

        if (minr > maxr || minc > maxc) break;

        for (int j = maxc; j >= minc; j--) {
            a[maxr][j] = x;
            x++;
        }
        maxr--;

        if (minr > maxr || minc > maxc) break;

        for (int i = maxr; i >= minr; i--) {
            a[i][minc] = x;
            x++;
        }
        minc++;
    }
    return a;
        
    }
};

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<int> v(k);
        
        // Case 1: x is smaller than the first element
        if (x <= arr[0]) {
            for (int i = 0; i < k; i++) {
                v[i] = arr[i];
            }
            return v;
        }

        // Case 2: x is greater than the last element
        if (x >= arr[n - 1]) {
            int i = n - 1;
            int j = k - 1;
            while (j >= 0) {
                v[j] = arr[i];
                j--;
                i--;
            }
            return v;
        }

        // Binary Search
        int low = 0, high = n - 1;
        int mid = -1;
        bool flag = false;
        int t = 0;

        while (low <= high) {
            mid = low + (high - low) / 2;
            if (arr[mid] == x) {
                flag = true;
                v[t] = arr[mid];
                t++;
                break;
            } else if (arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        int lb, ub;
        if (flag) {
            lb = mid - 1;
            ub = mid + 1;
        } else {
            lb = high;
            ub = low;
        }

        // Pick closest elements using 2-pointer expansion
        while (t < k && lb >= 0 && ub < n) {
            int d1 = abs(x - arr[lb]);
            int d2 = abs(x - arr[ub]);
            if (d1 <= d2) {
                v[t] = arr[lb];
                lb--;
            } else {
                v[t] = arr[ub];
                ub++;
            }
            t++;
        }

        // Fill remaining from left
        while (t < k && lb >= 0) {
            v[t] = arr[lb];
            lb--;
            t++;
        }

        // Fill remaining from right
        while (t < k && ub < n) {
            v[t] = arr[ub];
            ub++;
            t++;
        }

        sort(v.begin(), v.end());
        return v;
    }
};


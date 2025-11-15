class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // largest element present on each end
        int i = m - 1, j = n - 1, k = m + n - 1;

        // checking upto both vector have el
        while (i >= 0 and j >= 0) {
            // check num2 have larger value
            if (nums1[i] < nums2[j]) {
                nums1[k--] = nums2[j--];
            } else {
                //n1 is larger
                nums1[k--] = nums1[i--];
            }
        }
        // element in num2 available
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        if (nums1.size() > nums2.size())
            return findMedianSortedArrays(nums2, nums1);

        int n = nums1.size();
        int m = nums2.size();

        int low = 0;
        int high = n;

        int leftSize = (n + m + 1) / 2;

        while (low <= high) {

            int i = low + (high - low) / 2;
            int j = leftSize - i;

            int leftA  = (i == 0) ? INT_MIN : nums1[i - 1];
            int rightA = (i == n) ? INT_MAX : nums1[i];

            int leftB  = (j == 0) ? INT_MIN : nums2[j - 1];
            int rightB = (j == m) ? INT_MAX : nums2[j];

            if (leftA > rightB) {
                high = i - 1;
            }

            else if (leftB > rightA) {
                low = i + 1;
            }

            else {

                if ((n + m) % 2 == 1) {
                    return max(leftA, leftB);
                }

                return (max(leftA, leftB) +
                        min(rightA, rightB)) / 2.0;
            }
        }

        return 0.0;
    }
};
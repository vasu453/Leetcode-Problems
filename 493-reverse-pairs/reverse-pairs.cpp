class Solution {
public:
int cnt = 0;
void Merge(vector<int>& arr, int left, int mid, int right) {
    // Calculate the sizes of the two subarrays
    int n1 = mid - left + 1; // Size of left subarray
    int n2 = right - mid;    // Size of right subarray

    // Create temporary arrays for left and right subarrays
    int* L = new int[n1]; // Left subarray
    int* R = new int[n2]; // Right subarray

    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[left..right]
    int i = 0; // Initial index of first subarray
    int j = 0; // Initial index of second subarray
    int k = left; // Initial index of merged array

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of L[] if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy remaining elements of R[] if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
    j = mid + 1;

    // Free dynamically allocated memory
    delete[] L;
    delete[] R;
}

// Function to implement merge sort
void MergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        // Find the middle point
        int mid = left + (right - left) / 2;
        // Recursively sort first and second halves
        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);
        int i = left;
        int j = mid + 1;
        for (i = left; i <= mid; i++) {
            while (j <= right && arr[i] > 2LL * arr[j])
                {j++;}
            cnt += j - (mid + 1);
        }
        // Merge the sorted halves
        Merge(arr, left, mid, right);
    }
}
    int reversePairs(vector<int>& nums) {
        MergeSort(nums, 0, nums.size()-1);
        return cnt;
    }
};
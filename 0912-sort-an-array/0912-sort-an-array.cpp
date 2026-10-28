class Solution {
private:
    void merge(vector<int>& nums, int left, int mid, int right, vector<int>& temp) {
        int i = left;       // Starting index for left subarray
        int j = mid + 1;    // Starting index for right subarray
        int k = left;       // Starting index to be sorted
        
        while (i <= mid && j <= right) {
            if (nums[i] <= nums[j]) {
                temp[k++] = nums[i++];
            } else {
                temp[k++] = nums[j++];
            }
        }
        
        // Copy remaining elements from left subarray, if any
        while (i <= mid) {
            temp[k++] = nums[i++];
        }
        
        // Copy remaining elements from right subarray, if any
        while (j <= right) {
            temp[k++] = nums[j++];
        }
        
        // Copy sorted elements back into the original array
        for (int idx = left; idx <= right; idx++) {
            nums[idx] = temp[idx];
        }
    }

    void mergeSort(vector<int>& nums, int left, int right, vector<int>& temp) {
        if (left >= right) return;
        
        int mid = left + (right - left) / 2;
        mergeSort(nums, left, mid, temp);
        mergeSort(nums, mid + 1, right, temp);
        merge(nums, left, mid, right, temp);
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> temp(nums.size());
        mergeSort(nums, 0, nums.size() - 1, temp);
        return nums;
    }
};
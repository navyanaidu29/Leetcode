class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right) {
            // To prevent potential integer overflow for large index sums
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                return mid; // Target found, return its index
            } else if (nums[mid] < target) {
                left = mid + 1; // Target must be in the right half
            } else {
                right = mid - 1; // Target must be in the left half
            }
        }
        
        return -1; // Target not found
    }
};

    
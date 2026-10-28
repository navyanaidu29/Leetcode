class Solution {
    public int search(int[] nums, int target) {
        return searchHelper(nums, target); 
    }
    
    static int searchHelper(int[] arr, int k) {
        int mid, low = 0, high = arr.length - 1;
        while (low <= high) {
            mid = (low + high) / 2;
            if (arr[mid] == k) {
                return mid;
            } else if (arr[mid] < k) {
                low = mid + 1;
            } else if (arr[mid] > k) {
                high = mid - 1;
            }
        }
        return -1;
    }
}
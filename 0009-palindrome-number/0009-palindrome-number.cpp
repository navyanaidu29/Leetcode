class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers ending in 0 (except 0 itself) cannot be palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // Compare the first half with the reversed second half
        // x == reversedHalf handles even-length numbers (e.g., 1221)
        // x == reversedHalf / 10 handles odd-length numbers (e.g., 12321)
        return x == reversedHalf || x == reversedHalf / 10;
    }
};   
    
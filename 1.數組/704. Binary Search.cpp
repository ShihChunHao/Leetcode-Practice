class Solution {
public:
    int search(const vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            // Avoiding integer overflow
            int middle = left + (right - left) / 2;
            if (nums[middle] == target) {
                return middle;
            } else if (nums[middle] > target) {
                // No need to check middle
                right = middle - 1;
            } else {
                // No need to check middle
                left = middle + 1;
            }
        }
        return -1;
    }
};

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size());
        int k = nums.size()-1;

        // i 是起始指針，j 是終止指針
        for (int i = 0, j = nums.size() - 1; i <= j; ) {
            // 比較兩個指針指向的數字的平方，選擇較大的來填充 result
            if (nums[i] * nums[i] > nums[j] * nums[j]) {
                // 如果左邊的平方大於右邊的平方，將左邊的平方放在 result 的當前 k 位置
                result[k] = nums[i] * nums[i];
                i++; // 移動左指針向右
            } else {
                // 否則將右邊的平方放在 result 的當前 k 位置
                result[k] = nums[j] * nums[j];
                j--; // 移動右指針向左
            }
            k--; // 每次填充一個元素後，將 k 遞減，以填充下一個位置
        }
        return result;
    }
};

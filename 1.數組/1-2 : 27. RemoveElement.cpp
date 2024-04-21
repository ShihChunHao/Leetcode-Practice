class Solution {
public:
    int removeElement(vector<int>& nums, const int val) {
        // 初始化慢指針。這個指針將追踪數組中下一個不等於 `val` 的元素位置。
        int slow = 0;

        // 使用快指針遍歷數組。快指針將逐一檢查每個數組元素。
        for (int fast = 0; fast < nums.size(); ++fast) {
            // 檢查當前由快指針指向的元素是否不是要移除的值。
            if (nums[fast] != val) {
                // 如果當前元素不是 `val`，則將其複製到慢指針指示的位置。
                // 這一操作實際上是在覆蓋那些等於 `val` 的元素。
                nums[slow++] = nums[fast];
            }
        }
        // 返回新的數組長度，即 `slow` 指針的最終位置，它表示了不包含 `val` 的元素的數組長度。
        return slow;
    }
};

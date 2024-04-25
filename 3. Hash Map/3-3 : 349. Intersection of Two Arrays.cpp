class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> result;
        unordered_set<int> nums_set(nums1.begin(), nums1.end());

        for(int nums1: nums2){
            
        }
        
        for (int num : nums2) { // num 遍歷 nums2的元素
            if (nums_set.find(num) != nums_set.end()) { // find(某元素）, nums_set.end() 查找到最後
                result.insert(num); // 插入在最前面
            }
        }
        return vector<int>(result.begin(), result.end()); // 回傳一個 Vector
    }
};

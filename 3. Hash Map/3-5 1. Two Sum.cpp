class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> map;
        vector<int> answer;
        int complement = 0;
        for(int i = 0; i < nums.size(); i++){
             complement = target - nums[i];
            // 如果找到就回傳
            if( map.find(complement) != map.end()){
                answer.push_back(map[complement]);
                answer.push_back(i);
                return answer;
            } else {
                // 否則將當前元素的數值存到 map
                map[nums[i]] = i;
            }
        }
        // 如果沒有找到合適的組合，返回空數組
        return {};
    }
};


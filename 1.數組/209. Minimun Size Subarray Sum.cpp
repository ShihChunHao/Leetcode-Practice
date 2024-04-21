class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int result = INT32_MAX;
        int i = 0;
        int sublength = 0;
        for(int j=0; j<nums.size(); j++){
            sum = sum + nums[j];
            while( sum >= target){
                sublength = j - i + 1;
                result = min(sublength, result);
                sum = sum - nums[i];
                i++;
            }
        }
        if(result==INT32_MAX){
            return 0;
        }
        return result;
    }
};

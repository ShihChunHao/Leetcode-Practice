class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        // 紀錄字母出現的頻率
        int hash1[26] = {0};
        int hash2[26] = {0};

        for(int i=0; i<words[0].size(); i++){
            hash1[ words[0][i] - 'a'] ++;
        }
        // 統計除了第一個字符串，其他的字符串的字母出現的頻率
        for(int i=1; i<words.size(); i++){
            for(int j=0; j<words[i].size(); j++){
                hash2[ words[i][j] - 'a'] ++;
            }
            // 更新hash1，保證hash裡統計26個字符在所有字符串裡出現的最小次數
            for(int k=0; k<26; k++){
                hash1[k] = min(hash1[k], hash2[k]);
                hash2[k] = 0;
            }
        }
        // 將 hash1 轉變成輸出的格式
        vector<string> result;
        for(int k=0; k<26; k++){
            while(hash1[k] != 0){
                string s(1, k+'a');
                result.push_back(s);
                hash1[k]--;
            }
        }
        return result;
    }
};

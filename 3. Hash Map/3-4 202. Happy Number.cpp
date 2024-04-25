class Solution {
public:
    int getnum(int n){
            int sum = 0;
            while (n!=0){
                sum = sum + (n%10)*(n%10);
                n = n/10;
            }
            return sum;
    }

    bool isHappy(int n) {
        unordered_set<int> result;
        while(1){
            n = getnum(n);
            if(n==1){
                return true;
            }
            // .find() 沒找到的話會指向最後一個元素
            if(result.find(n) != result.end()){
                return false;
            }else{
                result.insert(n);
            }
            
        }
    }
};

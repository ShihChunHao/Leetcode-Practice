// Method 1 : Intuitive

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n));
        int offset = 1;
        int i=0, j=0;
        int counter = 1;
        int loop = n/2;
        int startx=0, starty=0;
        
        while(loop--){
            i = startx;
            j = starty;
            for(j=startx; j< n-offset; j++){
                res[i][j] = counter;
                counter++;
            }
            for(i=starty; i<n-offset; i++){
                res[i][j] = counter;
                counter++;
            }
            for(; j>startx; j--){
                res[i][j] = counter;
                counter++;
            }
            for(; i>starty; i--){
                res[i][j] = counter;
                counter++;
            }
            offset++;
            startx++;
            starty++;
        }

        if(n%2 == 1){
            res[n/2][n/2] = counter;
        }

        return res;
    }
};

// Method 2 : Reduce Variable

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));
        int num = 1;
        int start = 0, end = n - 1;
        // 分成四條線做模擬
        while (start < end) {
            for (int i = start; i < end; i++) matrix[start][i] = num++;
            for (int i = start; i < end; i++) matrix[i][end] = num++;
            for (int i = end; i > start; i--) matrix[end][i] = num++;
            for (int i = end; i > start; i--) matrix[i][start] = num++;
            start++;
            end--;
        }
        if (n % 2 == 1) matrix[start][start] = num;
        return matrix;
    }
};

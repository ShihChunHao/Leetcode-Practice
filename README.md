# Leetcode-Practice
'leetcode-master' practice record.

create in 2024/04/21.

## 1. Array and list
  ### 1-1 704. Binary Search 
      - KEY  IDEA: Iteration 'middle'.
      - Check for boundary, no need to check 'middle' again.
      - Avoid 'middle' overflow.
      - 時間複雜度:O(log n).
      - 空間複雜度:O(1).

  ### 1-2 27. Remove Element 
      - KEY IDAE: Slow pointer and Fast pointer.
      - Double Pointer.
      - if(nums[fast] != val) : Find target, skip.
      - 時間複雜度：O(n).
      - 空間複雜度：O(1).

  ### 1-3 977. Squares of a Sorted array
      - KEY IDEAS: Head and Tail will be the BIGGEST.
      - Double Pointer.
      - 時間複雜度為 O(n).
      
  ### 1-4 209. Minimun Size Subarray Sum
      - KEY IDEAS: Moving Window, Fast pointer find target, slow pointer minimize length.
      - Double Pointer.
      - When moving slow pointer, use WHILE instead of IF.
      - 時間複雜度：O(n).
      - 空間複雜度：O(1).
      
  ### 1-5 59. Spiral Matrix.cpp
      - KEY IDEAS: Divide into 4 lines, change x-axis and y-axis index.
      - 2D-Vector : vector<vector<int>> matrix(n, vector<int>(n));
      - Find that n/2 is the rotate times.
      - If n is odd, need to tackle with CENTER.


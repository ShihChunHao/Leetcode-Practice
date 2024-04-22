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

## 2. Link List
  ### List Struct
  熟記！
  Struct ListNode{
      int val;
      ListNode *next;
      LinkNode(int x): val(x), next(nullptr){}
  };
  
  ### 2-1 203. Remove Element in Linklist
      - KEY IDEAS: Dummy Head, no nned to takle with boundary condition.
      - 宣告的方法：ListNode *curr = head; curr->next = ptr;
      - 時間複雜度：O(n).
      - 空間複雜度：O(1).

  ### 2-2 707. Design LinkedList
      - KEY IDEAS: Always keep checking size and index : if (index >= size) return -1;
      - LinkNode* dummy; // 虛擬頭指針
      - LinkNode* tail;  // 虛擬尾指針
      - tail NEED to be update.
      - 時間複雜度：O(index).
      - 空間複雜度：O(1).

  ### 2-3 206. Reverse Linked List
      - KEY IDEAS: Reverse the -> ! No need to create a new LinkList.
      - Create temp to save curr->next.
      - Create ptr to save previous node, start as NULL (dummy).
      - Create curr to change the pointer, start as head.
      - 時間複雜度：O(n).
      - 空間複雜度：O(1).

  ### 2-4 24. Swap Nodes in Pairs
      - KEY IDEAS: Create a dummy nodes. 
      - Keeps First and Next Swap Fisrt in temp. (第一個節點 和 第三個節點）
      - 3 steps : curr -> 2; 2 -> 1; 1 -> 3; 
      - 時間複雜度：O(n).
      - 空間複雜度：O(1).

  ### 2-5 19. Remove the Node from End
      - KEY IDEAS: Double Pointer. 
      - 讓fast移動n步，然後讓fast和slow同時移動，直到fast指向鏈表末尾。
      - Slow pointer will finally stop in front of the delete node.
      - 時間複雜度：O(n).
      - 空間複雜度：O(1).

  ### 2-6 160. 
      - KEY IDEAS 1: 把兩著的尾端對齊，再從短鏈表的 head 與 長鏈表的 ptr 往後找。
      - KEY IDEAS 2: Double Pointer method. 讓 A 尾巴接在 B 頭部，讓 B 尾巴接在 A 頭部，觀察是否相遇。
      - - 時間複雜度：O(n+m).
      
  ### 2-6 142. Detect Linklist Cycle II
      - KEY IDEAS: Double Pointer.
      - 讓快指針每次走兩步，慢指針每次走一步，若有環狀則他們必定會相遇。
      - How to Find th POSITION?
      -- 假設x是沒有環狀的部分 y是環狀裡走了多久遇見 z是環狀其他的長度.
      -- 假設他們相遇在 X+Y 處，這時Slow走了X+Y，Fast走了 X+Y+n(Y+Z).
      -- 由於 Slow 步數 * 2 = Fast 步數 ， 解方程式得到 X = (n-1)(y+z)+z
      -- 當 n=1 時 x=z ，表示只要從 head 和 meet 同時移動，碰見可得入口。
      -- 當 n>1 時 情況相同。
      - 時間複雜度：O(n).
      - 空間複雜度：O(1).

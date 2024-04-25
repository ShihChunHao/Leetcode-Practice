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

  ### 2-6 160. Intersection os Two Linklist
      - KEY IDEAS 1: 把兩著的尾端對齊，再從短鏈表的 head 與 長鏈表的 ptr 往後找。
      - KEY IDEAS 2: Double Pointer method. 讓 A 尾巴接在 B 頭部，讓 B 尾巴接在 A 頭部，觀察是否相遇。
      - - 時間複雜度：O(n+m).
      
  ### 2-7 142. Detect Linklist Cycle II
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

## 3. Hash Table
| 類型 | 底層實現 | 是否有序 | 鍵值是否可以重複 | 查找效率 | 插入效率 | 
| ---- | -------- | -------- | ---------------- | -------- | -------- |
| `std::map` | 紅黑樹 | 有序 | 鍵值不可重複 | O(log n) | O(log n) |
| `std::multimap` | 紅黑樹 | 有序 | 鍵值可重複 | O(log n) | O(log n) |
| `std::unordered_map` | 哈希表 | 無序 | 鍵值不可重複 | O(1) | O(1) |

std::set 和std::multiset 的底層實現是紅黑樹，紅黑樹是一種平衡二叉搜索樹，所以key值是有序的。

當我們要使用集合來解決哈希問題的時候，優先使用unordered_set，因為它的查詢和增刪效率是最優的，如果需要集合是有序的就用set，如果要求不僅有序還要有重複數據的話，那麼就用multiset。

  ### 3-1 242. Valid anagram.cpp
      - KEY IDEAS: 創建一個 hash map 紀錄出現字母的次數. (array)
      - record[s[i]-'a']++; // 減去他的ASCI Code
      - 時間複雜度：O(n).
      - 空間複雜度：O(1).

  ### 3-2 1002: Find Common Character.cpp
      - KEY IDEAS: 創建兩個 hash map ，一個紀錄第n個字串，一個紀錄n+1個字串，取min。
      - hash1[k] = min(hash1[k], hash2[k]);
      - 如何將 HashMap 變成字串輸出？
            while(hash1[k] != 0){
                string s(1, k+'a');
                result.push_back(s);
                hash1[k]--;
            }
      - 時間複雜度：O(m) + O(nk) + O(n) = O(m + nk).
      - 空間複雜度：O(1).

  ### 3-3 349. Intersection of Two Arrays
      - KEY IDEAS: unordered_set , 輸出的結果的去重的， 同時可以不考慮輸出結果的順序
      - 語法：unordered_set<int> nums_set(nums1.begin(), nums1.end());
      - nums_set.find(3); 查找有沒有三這個元素
      - nums_set.end(); 遍歷到最後一個元素
       - 時間複雜度：O(mn).
      - 空間複雜度：O(n).

  ### 3-4 202. Happy Number

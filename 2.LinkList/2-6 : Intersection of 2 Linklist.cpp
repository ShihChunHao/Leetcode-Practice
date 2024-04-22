// Method 1
// 把短的對齊到長的鏈表，在開始往後找相同的節點

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * currA = headA;
        ListNode * currB = headB;
        
        if(currA == NULL || currB == NULL)  return NULL;
        
        int lenA=0, lenB=0, diff;
        while(currA!=NULL){
            lenA++;
            currA = currA -> next;
        }
        while(currB!=NULL){
            lenB++;
            currB = currB -> next;
        }
        
        if(lenA>=lenB){
            diff = lenA - lenB;
            ListNode * currA1 = headA;
            for(int i = 0; i<diff; i++){
                currA1 = currA1 -> next;
            }
            currB = headB;
            while(currA1!=NULL && currB!=NULL){
                if(currA1 == currB ){
                    return currA1;
                }
                currA1 = currA1 -> next;
                currB = currB -> next;
            }
        }
        else{
            diff = lenB - lenA;
            ListNode * currB1 = headB;
            for(int i = 0; i<diff; i++){
                currB1 = currB1 -> next;
            }
            currA = headA;
            while(currB1!=NULL && currA!=NULL){
                if(currB1 == currA ){
                    return currB1;
                }
                currB1 = currB1 -> next;
                currA = currA -> next;
            }
        }
        return NULL;
    }
};

// Method 2 : Brilliant!!
 
/*
這種方法的核心思想基於一個事實：兩個鏈表的路徑差異。
如果兩個鏈表在某處相交，則它們從交點到鏈表末尾的長度是相同的。
問題在於它們從鏈表頭到交點的路徑可能不同。
雙指針法正是通過讓兩個指針分別遍歷兩個鏈表，然後交換起點，來確保兩個指針能走相同長度的路徑。
*/
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) return NULL;

        ListNode *currA = headA;
        ListNode *currB = headB;

        while (currA != currB) {
            // 當一個指針到達末尾時，將其重定向到另一個鏈表的頭部
            currA = currA ? currA->next : headB;
            currB = currB ? currB->next : headA;
        }

        // 返回交點，或者沒有交點返回NULL
        return currA;
    }
};

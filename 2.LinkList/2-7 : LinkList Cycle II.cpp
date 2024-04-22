class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode * slow = head;
        ListNode * fast = head;
        // 確保快指針（fast）及其下一個節點 (fast->next) 都不是 NULL 
        // 可以安全地訪問 fast->next->next 而不會遇到空指針異常。
        while(fast != NULL && fast -> next != NULL){
            fast = fast -> next -> next;
            slow = slow -> next;
            if(fast == slow){
                ListNode * index1 = head;
                ListNode * index2 = slow;
                while(index1 != index2){
                    index1 = index1 -> next;
                    index2 = index2 -> next;
                }
                return index1;
            }
        }
        return NULL;
    }
};

// Method 1
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head != NULL && head->val == val){
            head = head->next;
        }
        if(head == NULL){
            return {};
        }
        ListNode *curr = head;
        ListNode *ptr = head->next;
        while(ptr != NULL){
            if(ptr->val == val){
                curr->next = ptr -> next;
                ptr = ptr-> next;
            }else{
                curr = ptr;
                ptr = ptr -> next;
            }        
        }
        return head;
    }
};

// Method 2
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // 創造一個虛擬頭部
        ListNode *dummy = new ListNode(0);
        dummy-> next = head;
        ListNode *curr = dummy;
        ListNode *ptr = dummy->next;
        while(ptr != NULL){
            if(ptr->val == val){
                curr->next = ptr -> next;
                ptr = ptr-> next;
            }else{
                curr = ptr;
                ptr = ptr -> next;
            }        
        }
        // 由於可能刪掉第一個，因此 return dummy->next
        return dummy->next;
    }
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *temp;
        ListNode *curr = head;
        ListNode *ptr = NULL;
        while(curr!=NULL){
            temp = curr -> next;
            curr -> next = ptr;
            ptr = curr;
            curr = temp;
        }
        return ptr;  
    }
};

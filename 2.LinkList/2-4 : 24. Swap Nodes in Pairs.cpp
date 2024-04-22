class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode * dummy = new ListNode(0);
        dummy -> next = head;
        ListNode * curr = dummy;

        while(curr->next!=NULL && curr->next->next!=NULL){
            ListNode * first = curr -> next; // 第一個交換節點
            ListNode * second = curr -> next -> next -> next; // 第三個交換節點
            curr -> next = curr -> next -> next;
            curr -> next -> next = first;
            curr -> next -> next -> next = second;

            curr = curr->next->next;
        }
        return dummy->next;
    }
};

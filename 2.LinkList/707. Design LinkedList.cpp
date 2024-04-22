// /**
//  * Your MyLinkedList object will be instantiated and called as such:
//  * MyLinkedList* obj = new MyLinkedList();
//  * int param_1 = obj->get(index);
//  * obj->addAtHead(val);
//  * obj->addAtTail(val);
//  * obj->addAtIndex(index,val);
//  * obj->deleteAtIndex(index);
//  */

class MyLinkedList {
public:
    struct LinkNode {
        int val;
        LinkNode *next;
        LinkNode(int x) : val(x), next(nullptr) {}
    };

    LinkNode* dummy;
    LinkNode* tail;
    int size;

    MyLinkedList() {
        dummy = new LinkNode(0);
        tail = new LinkNode(0);
        size = 0;
    }

    int get(int index) {
        if (index >= size) return -1;
        LinkNode *curr = dummy->next;
        for (int i = 0; i < index; i++) 
            curr = curr->next;
        return curr ? curr->val : -1;
    }
    
    void addAtHead(int val) {
        addAtIndex(0, val);
    }
    
    void addAtTail(int val) {
        addAtIndex(size, val);
    }
    
    void addAtIndex(int index, int val) {
        if (index > size) 
            return;
        LinkNode* prev = dummy;
        for (int i = 0; i < index; i++) 
            prev = prev->next;
        LinkNode* newNode = new LinkNode(val);
        newNode->next = prev->next;
        prev->next = newNode;
        if (index == size) 
            tail = newNode; // 更新尾指针
        size++;
    }
    
    void deleteAtIndex(int index) {
        if (index >= size) return;
        LinkNode* prev = dummy;
        for (int i = 0; i < index; i++) 
            prev = prev->next;
        LinkNode* toDelete = prev->next;
        if (toDelete) {
            prev->next = toDelete->next;
            if (index == size - 1) tail = prev; // 更新尾指针
            delete toDelete;
            size--;
        }
    }
};

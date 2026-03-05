q link - https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/

var deleteMiddle = function(head) {
    if(!head.next) return null;
    let slow = head, fast = head, prev = null;
    while(fast && fast.next){
        prev = slow;
        slow = slow.next;
        fast = fast.next.next;
    }
    prev.next = slow.next;
    return head;
};

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(!head->next) return nullptr;
        ListNode* slow = head, *fast = head, *prev = nullptr;
        while(fast && fast->next){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = slow->next;
        return head;
    }
};
q link - https://leetcode.com/problems/linked-list-cycle/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                return true;
            }
        }
        return false;
    }
};

var hasCycle = function(head) {
    if(!head || !head.next) return false;
    let fast = head, slow = head;
    while(fast && fast.next){
        slow = slow.next;
        fast = fast.next.next;
        if(slow == fast) return true;
    }
    return false;
};

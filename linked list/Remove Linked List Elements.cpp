class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* head2 = head;
        while(head2 && (head2->val == val)){
            head2=head2->next;
        }
        while(head && head->next)
        {
            if(head->next->val == val){
                head->next=head->next->next;
            }
            else head=head->next;
        }
        return head2;
    }
};
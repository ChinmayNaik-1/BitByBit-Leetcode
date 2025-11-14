class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* t=head,* r=head;

        while(r!=NULL && r->n)
        {
            t=t->next;
            r=r->next->next;
        }

        return t;
    }
};

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL) return NULL;
        ListNode* t=head,* r=head,* p=t;
        while(r!=NULL && r->next!=NULL)
        {
            p=t;
            t=t->next;
            r=r->next->next;
        }
        p->next=t->next;
        return head;
    }
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* first = reverse(head);
        return first;
    }

    ListNode* reverse(ListNode* head)
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* newhead= reverse(head->next);

        ListNode* front=head->next;
        front->next=head;
        head->next=NULL;

        return newhead;
    }
};

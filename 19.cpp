class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        
        if(count==1) return NULL;

        if(n==count) return head->next;

        temp=head;

        for(int i=1; i<count; i++)
        {
            if(i==count-n)
            {
                temp->next=temp->next->next;
            }
            temp=temp->next;
        }

        return head;
    }
};

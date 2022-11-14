class solution{
    public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        Listnode * slow= head;
        Listnode * fast =head;
        for (int i = 0; i < n+1; i++)
        {
            if(fast==nullptr){
                return head->next;
            }
            fast=fast->next;
        }
        while(fast!=nullptr){
            fast=fast->next;
            slow=slow->next;
        }
slow->next=slow->next->next;
return head;
        
    }
};
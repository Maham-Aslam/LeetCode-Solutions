class Solution {
public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        if (head1 == nullptr)
            return head2;
        else if (head2 == nullptr)
            return head1;

        ListNode* mergedHead = nullptr;
        if (head1->val <= head2->val) {
            mergedHead = head1;
            head1 = head1->next;
        } 
        else {
            mergedHead = head2;
            head2 = head2->next;
        }

        ListNode* mergedTail = mergedHead;
  
         while (head1 != nullptr && head2 != nullptr) {
            ListNode* temp = nullptr;
            if (head1->val <= head2->val) {
                temp = head1;
                head1 = head1->next;
            } 
            else {
                temp = head2;
                head2 = head2->next;
            }

            mergedTail->next = temp;
            mergedTail = temp;
        }

        if (head1 != nullptr)
            mergedTail->next = head1;
        else if (head2 != nullptr) 
            mergedTail->next = head2;

        return mergedHead;
    }
};
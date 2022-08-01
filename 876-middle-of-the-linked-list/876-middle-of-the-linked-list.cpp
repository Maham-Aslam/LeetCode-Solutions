/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = new ListNode;
        temp = head;
        int count = 0;
        while(temp){
            temp = temp->next;
            count++;
        }
        temp = head;
        int half = count/2;
        while(half){
            cout<<temp->val<<endl;
            temp = temp->next;
            half--;
        }
        return temp;       
    }
};
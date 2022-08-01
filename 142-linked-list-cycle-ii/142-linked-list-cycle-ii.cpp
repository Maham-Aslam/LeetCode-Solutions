class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* ptr = new ListNode;
        ptr->next = head;
        unordered_map<ListNode*, int> umap;
        while(ptr){
            if (umap.find(ptr->next) == umap.end())
                umap[ptr->next] = ptr->val;
            else
                return ptr->next;
            ptr = ptr->next;
        }  
        return nullptr;
    }
};
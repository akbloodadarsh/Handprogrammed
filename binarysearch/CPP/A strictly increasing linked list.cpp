    bool solve(LLNode* head) {
        int prev = INT_MIN;
        while(head)
        {
            if(prev>=head->val)return 0;
            prev = head->val;
            head = head->next;
        }
        return 1;
    }

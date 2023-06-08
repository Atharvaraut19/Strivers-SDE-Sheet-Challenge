bool detectCycle(Node *head) {
        if(head == NULL)
            return false;
        Node *fast = head;
        Node *slow = head;
        
        while(fast != NULL && fast ->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;

            if(fast == slow)
                return true;
        }
        
        return false;
    }
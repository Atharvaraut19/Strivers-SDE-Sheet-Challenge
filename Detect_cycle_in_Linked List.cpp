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


    /*Brute force is using hash table and assign the whole node to the hashtable 
    If the node already exist in the hashtable we can say cycle exists else no*/

    /*Optimized Way is usinf the fast and slowpointer the fast pointer will point to the next ka next
    and the slow will point to the next  and if at any point slow and fast meets cycle exists*/
/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
    int a = 0;
        Node* temp = head;
        while(temp!=NULL)
        {
            temp=temp->next;
            a++;
        }
        int size = a;

         Node* temp1 = head;
        int cnt = 0;
        while(cnt < (size/2))
        {
            temp1 = temp1->next;
            cnt++;
        }
        return temp1;
    }



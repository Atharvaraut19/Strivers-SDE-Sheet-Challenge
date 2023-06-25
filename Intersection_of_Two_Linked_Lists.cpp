/****************************************************************

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

*****************************************************************/

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    if(firstHead==NULL||secondHead==NULL)
    {
        return NULL;
    }
    Node *A = firstHead;
    Node *B = secondHead;
    while(A!=B)
    {
        if(A==NULL)
        {
            A = secondHead;
        } else {
          A = A->next;
        }
        if(B==NULL)
        {
            B = firstHead;
        } else {
          B = B->next;
        }

    }
    return A;
}

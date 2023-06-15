/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    Node* d = new Node();
    Node* temp = d;
    int carry = 0;
    while(num1!=NULL||num2!=NULL||carry)
    {
        int sum = 0;
        if(num1!=NULL)
        {
            sum = sum + num1->data;
            num1 = num1->next;
        }
        if(num2!=NULL)
        {
            sum = sum + num2->data;
            num2 = num2->next;
        }
        sum = sum+carry;
        carry = sum/10;
        Node* node = new Node(sum%10);
        temp ->next = node;
        temp = temp->next; 
    }
    return d->next;
}


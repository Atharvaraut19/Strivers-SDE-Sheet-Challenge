#include<iostream>
using namespace std;
class queue{
    public:
    int front;
    int rear;
    int *arr;
    int size;
    queue(int n)
    {
        this->size = n;
        this->front = -1;
        this->rear = -1;
        this->arr = new int[n];
    }
    void enqueue(int d)
    {
        if(rear==size-1)
        {
            cout<<"QUEUE FULL"<<endl;
        }
        else if(front == -1 && rear == -1){
        front ++;
        rear ++;
        arr[rear] = d;
        }
        rear++;
        arr[rear] = d;
        
    }
    void dequeue()
    {
        if(front >=rear || front==-1 && rear ==-1)
        {
            cout<<"QUEUE EMPTY"<<endl;
            return;
        }
        cout<<arr[front]<<endl;
        front++;
        
    }
    void disp()
    {
        if(front==-1 && rear ==-1 || front>=rear)
        {
            cout<<"QUEUE Empty"<<endl;
            return;
        }
        else{
            for(int d = front;d<=rear;d++)
            {
                cout<<arr[d]<<" ";
            }
        }

    }
};
int main()
{
    queue q = queue(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.disp();

}
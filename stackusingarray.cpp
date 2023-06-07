#include <iostream>
using namespace std;
class stack
{
    public:
    int* arr;
    int top;
    int size;
    stack(int s)
    {
        this->size = s;
        this->arr = new int[size];
        this->top = -1;
    }
    void push(int a)
{
    if(top == size-1)
    {
        cout<<"STACK FULL"<<endl;
    }
    else{
        top++;
        arr[top] = a;
    }
}

    void pop()
{
    if(top == -1)
    {
        cout<<"STACK Empty"<<endl;
    }
    else{
        top--;
    }
}

    int stacktop()
{
    if(top == -1)
    {
        return -1;
    }
    else{
        return arr[top];
    }
}

    void disp()
{
    if(top == -1)
    {
        cout<<"STACK Empty"<<endl;
    }
    else{
        for(int  i = top;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
    }
}
};
int main()
{
    stack st = stack(4);
    st.push(10);
    st.push(100);
    st.push(1000);
    st.push(10000);
    st.disp();
    st.pop();
    cout<<endl;
    cout<<st.stacktop();
}
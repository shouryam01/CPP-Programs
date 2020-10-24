#include<iostream>

using namespace std;

class Stack
{
private:
    int top;
    int arr[5];

public:
    Stack()
    {
        top = -1;
        for(int i=0;i<5;i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty()
    {
        if(top == -1)
            return true;

        else
            return false;

    }

    bool isFull()
    {
        if(top == 4)
            return true;

        else
            return false;
    }

    void push(int val)
    {
        if(isFull())
        {
            cout<<"STACK OVERFLOW :"<<endl;
        }

        else
        {
            top++;
            arr[top] = val;
        }
    }

    int pop()
    {
        if(isEmpty())
        {
            cout<<"STACK UNDERFLOW :"<<endl;
            return 0;
        }

        else
        {
            int popValue;
            popValue = arr[top];
            arr[top] = 0;
            top--;
            return popValue;
        }

    }

    int peek (int pos)
    {
        if(isEmpty())
        {
            cout<<"STACK UNDERFLOW :"<<endl;
            return 0;
        }

        else
        {
            return arr[pos];
        }
    }

    int Count()
    {
        return(top+1);

    }

};

int main()
{
    Stack s1;
    int value, option, position;

    do{
        cout<<"--------MENU--------"<<endl;
        cout<<"-------1.PUSH()-----"<<endl;
        cout<<"-------2.POP()------"<<endl;
        cout<<"-------3.PEEK()-----"<<endl;
        cout<<"-------4.COUNT()----"<<endl;
        cout<<"-------5.ISEMPTY()--"<<endl;
        cout<<"-------6.ISFULL()---"<<endl;
        cout<<"-------0.EXIT()-----"<<endl;
        cin>>option;

        switch(option)
        {
        case 0:
            break;

        case 1:
            cout<<"Enter an item to push in the stack :"<<endl;
            cin>>value;
            s1.push(value);
            break;

        case 2:
            cout<<"The popped item from the stack is "<<s1.pop()<<endl;
            break;

        case 3:
            cout<<"Enter the position where you want to peek :"<<endl;
            cin>>position;
            cout<<"The position where you peeked is "<<position<<endl;
            cout<<"The peeked value is "<<s1.peek(position);
            break;

        case 4:
            cout<<"The number of items in the stack is :"<<s1.Count()<<endl;
            break;

        case 5:
            if(s1.isEmpty())
                cout<<"The stack is empty :"<<endl;
                else
                    cout<<"Stack is not empty :"<<endl;
            break;

        case 6:
            if(s1.isFull())
                cout<<"The stack is full :"<<endl;
            else
                cout<<"Stack is not full :"<<endl;
            break;

        default:
            cout<<"Enter the proper option from (1-6) only "<<endl;
            break;


        }


    }while(option != 0);

return 0;
}


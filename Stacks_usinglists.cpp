#include<iostream>

using namespace std;

class node
{
public:
    int key;
    int data;

    node *next;

    node()
    {
        key = 0;
        data = 0;
        next = NULL;

    }

    node(int k, int d)
    {
        key = k;
        data = d;
        next = NULL;

    }
};

class Stack
{
public:
    node *top;

    Stack()
    {
        top = NULL;
    }

    bool isEmpty()
    {
        if(top == NULL){
            return true;
        }
        else
        {
            return false;
        }
    }

    bool checkifnodeexist(node *n)
    {
        node *temp = top;
        bool exist = false;
        while(temp != NULL)
        {
            if(temp -> key == n -> key)
            {
                exist = true;
                break;
            }
            temp = temp -> next;
        }
        return exist;
    }

    void push(node *n)
    {
        if(top == NULL)
        {
            top = n;
            cout<<"Node PUSHED successfully"<<endl;
        }

        else if(checkifnodeexist(n))
        {
            cout<<"Node already exist with this key value "<<"enter different key value"<<endl;
        }
        else
        {
            node * temp = top;
            top = n;
            n -> next = temp;
            cout<<"Node pushed successfully "<<endl;
        }
    }

    node * pop()
    {
        node * temp =NULL;
        if(isEmpty())
        {
            cout<<"Stack Underflow "<<endl;
            return temp;
        }
        else
        {
            temp = top;
            top = top->next;
            return top;
        }
    }

    node * peek()
    {
        if(isEmpty())
        {
            cout<<"Stack Underflow "<<endl;
            return NULL;
        }

        else
        {
            return top;

        }
    }

    int Count()
    {
        int Count = 0;
        node * temp = top;
        while(temp != NULL)
        {
            Count++;
            temp = temp->next;
        }
        return Count;
    }

    void display()
    {
        cout<<"ALl the values in the stack are "<<endl;
        node * temp = top;
        while(temp != NULL)
        {
            cout<< "(" << temp -> key << "," << temp -> data << ")" << "->" <<endl;
            temp = temp -> next;
        }

        cout<<"total no. of nodes in the stack :"<<Count()<<endl;
        cout<<endl;
    }


};

int main()
{
    Stack s1;
    int option, data, key;

    do{
            cout<<"What operation do you want to perform << enter the value from (1-7) and 0 to exit "<<endl;
            cout<<"1. Push() "<<endl;
            cout<<"2. Pop() "<<endl;
            cout<<"3. isEmpty() "<<endl;
            cout<<"4. peek() "<<endl;
            cout<<"5. Count() "<<endl;
            cout<<"6. display() "<<endl;
            cout<<"7. Clear screen "<<endl;

            cin>>option;

            node * new_node = new node;

            switch(option)
            {
            case 0:
                break;

            case 1:
                cout<<"Enter key and value of node to push in stack "<<endl;
                cin>>key;
                cin>>data;

                new_node -> key = key;
                new_node -> data = data;
                s1.push(new_node);
                break;

            case 2:
                cout<<"Pop function called "<<"popped value "<<endl;
                new_node = s1.pop();
                cout<<"top of stack is : ("<<new_node -> key << "," << new_node -> data << ")";
                delete new_node;
                cout<<endl;

                break;

            case 3:

                  if (s1.isEmpty())
                    cout << "Stack is Empty" << endl;
                  else
                    cout << "Stack is not Empty" << endl;
                  break;

            case 4:
                  if (s1.isEmpty()) {
                    cout << "Stack is Empty" << endl;
                  } else {
                    cout << "PEEK Function Called : " << endl;
                    new_node = s1.peek();
                    cout << "TOP of Stack is: (" << new_node -> key << "," << new_node -> data << ")" <<
                      endl;
                  }
                  break;

            case 5:
              cout << "Count Function Called: " << endl;
              cout << "No of nodes in the Stack: " << s1.Count() << endl;
              break;

            case 6:
              cout << "Display Function Called - " << endl;
              s1.display();
              cout << endl;
              break;

            case 7:
              system("cls");
              break;

            default:
              cout << "Enter Proper Option number " << endl;
            }

  } while (option != 0);

  return 0;
}




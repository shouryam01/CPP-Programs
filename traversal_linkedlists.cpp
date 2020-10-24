#include<iostream>

using namespace std;

struct node
{
    int data;
    node * next;
};

class linkedlist
{
private:
    node *head, *tail;

public:
    linkedlist()
    {
        head = NULL;
            tail = NULL;
    }

    void add_node(int n)
    {
        node *tmp = new node;

        tmp->data = n;
        tmp->next = NULL;

        if(head==NULL)
        {
            head=tmp;
            tail=tmp;
        }

        else
        {
            tail->next=tmp;
            tail=tail->next;
        }
    }

     void display()
    {
        node *tmp;
        tmp = head;
        while (tmp != NULL)
        {
            cout << tmp->data << endl;
            tmp = tmp->next;
        }
    }
};

int main()
{
    linkedlist a;
    a.add_node(1);
    a.add_node(2);
    a.display();
    return 0;
}

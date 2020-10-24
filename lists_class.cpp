#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class list
{
private:
    node *head, *tail;

public:
    list()
    {
        head = NULL;
        tail =NULL;
    }

    //This is how we can add the value and node at the end of the linked lists
    void createnode(int value)
    {
        node *temp = new node;
        temp ->data = value;
        temp->next = NULL;
        if(head == NULL)
        {
            head = temp;
            tail = temp;
            temp = NULL;

        }

        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    void display()
    {
        node *temp = new node;
        temp = head;
        while(temp! = NULL)
        {
            cout<<temp->data<<"\t";
            temp = temp->next;
        }
    }

// The basic framework of linked list is created...
// Now it is time to perform some other operations like insertion and deletion in singly linkedlists

//INSERTION-

//1.> Insertion at the start
//2.> Insertion at the end
//3.> Insertion at a particular position


//1.>

void insert_start(int value)        //Insertion at the start:
{
    node *temp =new node;
    temp->data = value;
    temp->next = head;
    head = temp;

}

//2.>

void insert_end(int value)
{
    node *temp = new node;
    temp->data = value;
    temp->data = NULL;

    if(head == NULL)
    {
        head = temp;
        tail = temp;
        temp = NULL;
    }

    else
    {
        tail->next = temp;
        tail= temp;
    }
}
//3.>

void insert_pos(int value, int pos)
//Now the new node can be inserted between the previous and current node by just performing two steps:

//1.Pass the address of the new node in the next field of the previous node.
//2.Pass the address of the current node in the next field of the new node.

{
    node *pre = new node;
    node *cur = new node;
    node *temp = new node;
    cur = head;
    for(int i = 0;i<pos;i++)
    {
        pre = cur;
        cur = cur->next;
    }

    temp ->data = value;
    pre->next = temp;
    temp->next = cur;
}
//  DELETION
//1.> DELETION FROM FIRST
//2.> DELETION FROM END
//3.> DELETION FROM A VALID POSITION


//1.>

void delete_first()
//Deleting the head node i.e the first node of the linked list
//process of deletion :
//1. Declare a temp pointer and pass the address of the first node, i.e head to this pointer
//2. Declare the second node of the list as head as it will be the first node of linked list after deletion
//3. Delete the temp node
{
    node *temp = new node;
    temp=head;
    head = head->next;
    delete temp;
}


//2.>

void delete_last()
{
    node *current = new node;
    node *previous = new node;
    current = head;
    while(current-> next != NULL)
    {
        previous = current;
        current = current->next;
    }
    tail = previous;
    previous->next = NULL;
    delete current;
}


//3.>

void delete_position(int pos)
{
    node *current = new node;
    node *previous = new node;
    current = head;
    for(int i=0;i<pos;i++)
    {
        previous = current;
        current = current -> next;
    }
    previous -> next = current -> next;
}
};

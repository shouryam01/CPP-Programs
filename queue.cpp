#include<iostream>
using namespace std;

int queue[100], n=100, front= -1, rear= -1;

void Insert()
{
    int val;

    if(rear == n-1)
        cout<<"QUEUE OVERFLOW "<<endl;

    else{
        if(front == -1)
        front = 0;
    cout<<"Insert the elements in queue :"<<endl;
    cin>>val;
    rear++;
    queue[rear] = val;
    }
}

void Delete()
{
    if(front == -1 || rear < front)
    {
        cout<<"QUEUE UNDERFLOW "<<endl;
        return;
    }
    else
    {
        cout<<"element deleted from queue is :"<< queue[front]<<endl;
        front++;
    }
}

void Display()
{
    if(front == -1)
        cout<<"Queue is Empty "<<endl;

    else
    {
        cout<<"Queue elements are :";
        for(int i =front;i<=rear;i++)
            cout<<queue[i]<<" ";
            cout<<endl;
    }
}

int main()
{
    int ch;

    do{
        cout<<"1. Insert element to queue"<<endl;
        cout<<"2. Delete element from queue"<<endl;
        cout<<"3. Display all the elements of the queue"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"Enter the choice :"<<endl;
        cin>>ch;

        switch(ch)
        {
            case 1:     Insert();
            break;

            case 2:     Delete();
            break;

            case 3:     Display();
            break;

            case 4:     cout<<"Exit"<<endl;
            break;

            default:    cout<<"Invalid choice "<<endl;
            break;

        }


    }while(ch != 4);

    return 0;
}

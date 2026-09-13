#include <iostream>
using namespace std;
int isfull(int &size,int &rear,int &front)
{
    if(((rear+1) % size) == front)
    {
        return 1;
    }
    return 0;
}
int isempty(int &front)
{
    if(front == -1)
    {
        return 1;
    }
    return 0;
}
void Pushback(int queue[],int &size,int &rear,int &front,int element)
{
    if(isfull(size,rear,front))
    {
        cout<<"Queue is Overflow...\n";
        return;
    }
    else
    {
        if(isempty(front))
        {
            rear = 0;
            front = 0;
        }
        else
        {
            rear = (rear+1)%size; //Move Forward
        }
        queue[rear] = element;
        cout<<"Element Added Successfully...\n";
    }
}
void Popback(int queue[],int &size,int &rear,int &front)
{
    if(isempty(front))
    {
        cout<<"Queue is Underflow...\n";
        return;
    }
    else
    {
        cout<<"Element Removed Sucessfully...\n";
        if(rear == front)
        {
            rear = -1;
            front = -1;
        }
        else
        {
            rear= (rear - 1 + size) % size; //Move Backward
        }
    }
}
void Pushfront(int queue[],int &size,int &rear,int &front,int element)
{
    if(isfull(size,rear,front))
    {
        cout<<"Queue is Overflow...\n";
        return;
    }
    else
    {
        if(isempty(front))
        {
            rear = 0;
            front = 0;
        }
        else
        {
            front = ((front - 1) + size) % size; //Move Backward
        }
        queue[front] = element;
        cout<<"Element Added Successfully...\n";
    }
}
void Popfront(int queue[],int &size,int &rear,int &front)
{
    if(isempty(front))
    {
        cout<<"Queue is Underflow...\n";
        return;
    }
    else
    {
        cout<<"Element Removed Sucessfully...\n";
        if(rear == front)
        {
            rear = -1;
            front = -1;
        }
        else
        {
            front = (front + 1) % size; //Move Forward
        }
    }
}
void getfront(int queue[],int &front)
{
    if(isempty(front))
    {
        cout<<"Queue is Empty...\n";
        return;
    }
    cout<<"Element at Front is "<<queue[front]<<'\n';
}
void getback(int queue[],int &rear,int &front)
{
    if(isempty(front))
    {
        cout<<"Queue is Empty...\n";
        return;
    }
    cout<<"Element at Rear is "<<queue[rear]<<'\n';
}
int main()
{
    int size=5;
    int queue[size];
    int rear=-1;
    int front=-1;
    int choice,element;
    do
    {
        cout<<"-----------------------\n";
        cout<<"Menu:\n";
        cout<<"1.Push Back\n2.Pop Back\n3.Push Front\n4.Pop Front\n5.Get Front\n6.Get Back\n7.IsFull\n8.IsEmpty\n9.Exit\n";
        cout<<"-----------------------\n";
        cout<<"Enter Your Choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter an Element to Push: ";
            cin>>element;
            Pushback(queue,size,rear,front,element);
            break;
        case 2:
            Popback(queue,size,rear,front);
            break;
        case 3:
            cout<<"Enter an Element to Push: ";
            cin>>element;
            Pushfront(queue,size,rear,front,element);
            break;
        case 4:
            Popfront(queue,size,rear,front);
            break;
        case 5:
            getfront(queue,front);
            break;
        case 6:
            getback(queue,rear,front);
            break;
        case 7:
            if(isfull(size,rear,front))
            {
                cout<<"Queue is Full...\n";
            }
            else
            {
                cout<<"Queue is Not Full\n";
            }
            break;
        case 8:
            if(isempty(front))
            {
                cout<<"Queue is Empty...\n";
            }
            else
            {
                cout<<"Queue is Not Empty...\n";
            }
            break;
        case 9:
            cout<<"Exiting Code...\n";
            break;        
        default:
            cout<<"Invalid Choice!Try Again...\n";
            break;
        }
    }
    while (choice != 9);
    return 0;    
}
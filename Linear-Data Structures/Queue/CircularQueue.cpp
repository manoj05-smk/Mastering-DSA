#include <iostream>
using namespace std;
int Isempty(int &front)
{
    if(front == -1)
    {
        return 1;
    }
    return 0;
}
int Isfull(int size,int &rear,int &front)
{
    if(((rear+1) % size) == front)
    {
        return 1;
    }
    return 0;
}
void Enqueue(int queue[],int size,int element,int &rear,int &front)
{
    if(Isfull(size,rear,front))
    {
        cout<<"Queue is Full..\n";
        return;
    }
    else
    {
        if(Isempty(front))
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear=(rear+1) % size;
        }
        queue[rear] = element;
        cout<<"Element Enqueued Sucessfully...\n";
      
    }
}
void Dequeue(int queue[],int size,int &rear,int &front)
{
    if(Isempty(front))
    {
        cout<<"Queue is Empty...\n";
        return;
    }
    cout<<"Dequeued Element is "<<queue[front]<<'\n';
    if(front == rear)
    {
        rear = -1;
        front = -1;
    }
    else
    {
        front = (front+1) % size;
    }
}
void Rearof(int queue[],int rear,int front)
{
    if(Isempty(front))
    {
        cout<<"Queue is Empty...\n";
        return;
    }
    cout<<"Current Rear Element in Queue is "<<queue[rear]<<'\n';
}
void Frontof(int queue[],int rear,int front)
{
    if(Isempty(front))
    {
        cout<<"Queue is Empty...\n";
        return;
    }
    cout<<"Current Front Element in Queue is "<<queue[front]<<'\n';
}
int main()
{
    int size=5;
    int queue[size];
    int front=-1;
    int rear=-1;
    int choice,element;
    do
    {
        cout<<"---------------------------\n";
        cout<<"Circular Queue Menu:\n";
        cout<<"1.Enqueue\n2.Dequeue\n3.To see Rear\n4.To see Front\n5.Check Is_Empty\n6.Check Is_Full\n7.Exit\n";
        cout<<"Enter Your Choice: ";
        cin>>choice;
        cout<<"---------------------------\n";
        switch (choice)
        {
        case 1:
            cout<<"Enter an Element: ";
            cin>>element;
            Enqueue(queue,size,element,rear,front);
            break;
        case 2:
            Dequeue(queue,size,rear,front);
            break;
        case 3:
            Rearof(queue,rear,front);
            break;
        case 4:
            Frontof(queue,rear,front);
            break;
        case 5:
            if(Isempty(front))
            {
                cout<<"Queue is Empty...\n";
            }
            else
            {
                cout<<"Queue is Not Empty...\n";
            }
            break;
        case 6:
            if(Isfull(size,rear,front))
            {
                cout<<"Queue is Full...\n";
            }
            else
            {
                cout<<"Queue is Not Full...\n";
            }
            break;
        case 7:
            cout<<"Exiting code...\n";
            break;
        default:
            cout<<"Invalid Choice!Try Again...\n";
            break;
        }
    } 
    while (choice != 7);
    return 0;  
}
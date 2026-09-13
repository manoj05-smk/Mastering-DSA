#include <iostream>
using namespace std;
int isempty(int front,int rear)
{
    if(front > rear)
    {
        return 1;
    }
    return 0;
}
int isfull(int size,int rear)
{
    if(size-1 == rear)
    {
        return 1;
    }
    return 0;
}
void Enqueue(int queue[],int size,int &rear,int element)
{
    if(isfull(size,rear))
    {
        cout<<"Queue is Full...\n";
        return;
    }
    rear++;
    queue[rear] = element;
    cout<<"Element Enqueued Successfully...\n";  
}
void Dequeue(int queue[],int &front,int rear)
{
    if(isempty(front,rear))
    {
        cout<<"Queue is Empty...\n";
        return;
    }
    cout<<"Dequeues Element: "<<queue[front]<<'\n';
    front++;
    cout<<"Dequeued Successfully...\n";
}
void PeekFront(int queue[],int front,int rear)
{
    if(isempty(front,rear))
    {
        cout<<"Queue is Empty...\n";
        return;
       
    }
    cout<<"At Front: "<<queue[front]<<'\n';
}
void PeekRear(int queue[],int front,int rear)
{
    if(isempty(front,rear))
    {
        cout<<"Queue is Empty...\n";
        return;
       
    }
    cout<<"At Rear: "<<queue[rear]<<'\n';
    
}
int main()
{
    //Queue Operations
    int size=5;
    int front=0;
    int rear=-1;
    int queue[size];
    int choice;
    int element;
    do
    {
        cout<<"Menu:\n";
        cout<<"1.Enqueue\n2.Dequeue\n3.To See Front\n4.To See Rear\n5.IsEmpty\n6.Isfull\n7.Exit\n";
        cout<<"--------------------\n";
        cout<<"Enter Your Choice: ";
        cin>>choice;
        cout<<"--------------------\n";
        switch (choice)
        {
        case 1:
            cout<<"Enter an Element: ";
            cin>>element;
            Enqueue(queue,size,rear,element);
            break;
        case 2:
            Dequeue(queue,front,rear);
            break;
        case 3:
            PeekFront(queue,front,rear);
            break;
        case 4:
            PeekRear(queue,front,rear);
            break;
        case 5:
            if(isempty(front,rear))
            {
                cout<<"Queue is Empty...\n";
            }
            else
            {
                cout<<"Queue is Not Empty...\n";
            }
            break;
        case 6:
            if(isfull(size,rear))
            {
                cout<<"Queue is Full...\nNote:This is Simple Queue";
            }
            else
            {
                cout<<"Queue is Not Full...\n";
            }
            break;
        case 7:
            cout<<"Exiting Code...\n";
            break;        
        default:
            cout<<"Invalid Choice!Try Again...\n";
            break;
        }
    }
    while (choice != 7);
    return 0;    
}
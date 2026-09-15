#include <iostream>
using namespace std;
const int capacity=7;
//Right Shift For Insertion
void InsertAtFront(int arr[],int &size,int element)
{
    if(size == capacity)
    {
        cout<<"Array is Full...\n";
        return;
    }
    for(int i=size;i>0;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = element;
    size++;
}
void InsertAtPosition(int arr[],int &size,int element,int pos)
{
    if(size == capacity)
    {
        cout<<"Array is Full...\n";
        return;
    }
    for(int i=size;i>=pos;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = element;
    size++;
    
}
void InsertAtEnd(int arr[],int &size,int element)
{
    if(size == capacity)
    {
        cout<<"Array is Full...\n";
        return;
    }
    arr[size] = element;
    size++;  
}

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<"\n";
}
int main()
{
    //Array Insertion Operations
    int arr[capacity] = {1,2,3,4};
    int size=4;
    int choice,pos,element;
    do
    {
        cout<<"Menu:\n";
        cout<<"1.Insertion at Front\n2.Insertion at Given Position\n3:Insertion at End\n4.Print Array\n5.Exit\n";
        cout<<"-------------------------------\n";
        cout<<"Enter Your Choice: ";
        cin>>choice;
        switch (choice)
        {
            case 1:
                cout<<"Enter Element to Insert: ";
                cin>>element;
                InsertAtFront(arr,size,element);
                break;
            case 2:
                cout<<"Enter Element to Insert: ";
                cin>>element;
                cout<<"Enter a Postion to Insert: ";
                cin>>pos;
                InsertAtPosition(arr,size,element,pos);
                break;
            case 3:
                cout<<"Enter Element to Insert: ";
                cin>>element;
                InsertAtEnd(arr,size,element);
                break;
            case 4:
                printArray(arr,size);
                break;
            case 5:
                cout<<"Exiting a Code...\n";
                break;
            default:
                cout<<"Invalid Choice!Try Again...\n";
        }
    }
    while(choice != 5);
    return 0;           
}
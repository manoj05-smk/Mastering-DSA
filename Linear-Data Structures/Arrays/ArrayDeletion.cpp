#include <iostream>
using namespace std;
const int capacity = 7;
//Left Shift For Deletion and Read & Write Pointer for Occurence Deletion
void  DeleteFront(int arr[],int &size)
{
    if(size == 0)
    {
        cout<<"Array is Empty...\n";
        return;
    }
    for(int i=0;i<size-1;i++)
    {
        arr[i] = arr[i+1];
    }
    size--;
}
void DeletePosition(int arr[],int &size,int pos)
{
    if(size == 0)
    {
        cout<<"Array is Empty...\n";
        return;
    }
    for(int i=pos;i<size;i++)
    {
        arr[i-1] = arr[i];
    }
    size--;
}
void  DeleteEnd(int arr[],int &size)
{
    if(size == 0)
    {
        cout<<"Array is Empty...\n";
        return;
    }
    size--;
}
void FirstOccurence(int arr[],int &size,int ele)
{
    if(size == 0)
    {
        cout<<"Array is Empty...\n";
        return;
    }
    int found=0;
    int index=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i] == ele)
        {
            found=1;
            index=i;
            break;
        }
    }
    if(found)
    {
        for(int i=index;i<size-1;i++)
        {
            arr[i] = arr[i+1];
        }
        size--;
    }
    else
    {
        cout<<"Element Not Found...\n";
        return;
    }    
}
void AllOccurence(int arr[],int &size,int element)
{
    if(size == 0)
    {
        cout<<"Array is Empty...\n";
        return;
    }
    int index=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i] == element)
        {
            continue; //Skip the Copy
        }
        arr[index] = arr[i];
        index++;
    }
    size=index;
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
    //Array Deletion Operations
    int arr[capacity]={1,2,3,5,5};
    int size=5;
    int choice;
    int pos,element;
    do
    {
        cout<<"Menu:\n";
        cout<<"1.Delete at Front\n2.Delete at Given Position\n3.Delete at End\n4.Delete First Occurence\n5.Delete All Occurence\n6.Print Array\n7.Exit\n";
        cout<<"Enter Your Choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                DeleteFront(arr,size);
                break;
            case 2:
                cout<<"Enter Position to Delete: ";
                cin>>pos;
                DeletePosition(arr,size,pos);
                break;
            case 3:
                DeleteEnd(arr,size);
                break;
            case 4:
                cout<<"Enter Element to Delete: ";
                cin>>element;
                FirstOccurence(arr,size,element);
                break;
            case 5:
                cout<<"Enter Element to Delete: ";
                cin>>element;
                AllOccurence(arr,size,element);
                break;
            case 6:
                printArray(arr,size);
                break;
            case 7:
                cout<<"Exiting Code...\n";
                break;
            default:
                cout<<"Invalid Choice!Try Again...\n";
        }

    } 
    while(choice != 7);    
    return 0;
}
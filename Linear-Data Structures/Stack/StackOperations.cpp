#include <iostream>
using namespace std;
void push(int stack[],int size,int &top,int element)
{
    if(top==size-1)
    {
        cout<<"Stack Overflow...\n";
        return;
    }
    stack[++top]=element;
    cout<<"Element "<<element<<" Pushed Sucessfully...\n";
}
void pop(int stack[],int size,int &top)
{
    if(top==-1)
    {
        cout<<"Stack Underflow...\n";
        return;
    }
    cout<<"Element "<<stack[top]<<" Popped Sucessfully...\n";
    top--;
}
void peek(int stack[],int size,int &top)
{
    if(top==-1)
    {
        cout<<"Stack is Empty...\n";
        return;
    }
    cout<<"Element at Top "<<stack[top]<<"\n";
}
int main()
{
    const int size=5;
    int choice;
    int element;
    int stack[size];
    int top=-1;
    do
    {
        cout<<"Menu:\n1.Push a Element\n2.Pop a Element\n3.See Top of Element\n4.Exit\n";
        cout<<"----------------------\n";
        cout<<"Enter Your Choice: ";
        cin>>choice;
        switch (choice)
        {
            case 1:
                cout<<"Enter a Element to Push: ";
                cin>>element;
                push(stack,size,top,element);
                break;
            case 2:
                pop(stack,size,top);
                break;
            case 3:
                peek(stack,size,top);
                break;
            case 4:
                cout<<"Exiting Code...\n";
                break;        
            default:
                cout<<"Invalid Choice..!Try Again...\n";
                break;
        }
    }
    while (choice!=4);
    return 0;        
}
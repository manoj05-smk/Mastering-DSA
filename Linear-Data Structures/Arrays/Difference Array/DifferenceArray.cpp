#include <iostream>
using namespace std;
int main()
{
    int arr[]={5,5,5,5,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int differ[size+1]={0};
    int l=1,r=3;
    int reward=10;
    //Difference array usecase
    differ[l]=reward;
    differ[r+1]= -(reward);
    cout<<"Before Prefix Sum Difference Array: \n";
    for(int j=0;j<6;j++)
    {
        cout<<" "<<differ[j];
    }
    //Prefix Sum to add into original
    for(int i=1;i<6;i++)
    {
        differ[i] += differ[i-1];
    }
    cout<<"\nAfter Prefix Sum Difference Array: \n";
    for(int j=0;j<6;j++)
    {
        cout<<" "<<differ[j];
    }
    cout<<"\nUpdated Array: \n";
    for(int i=0;i<size;i++)
    {
        cout<<" "<<arr[i]+differ[i];
    }
    return 0;
}
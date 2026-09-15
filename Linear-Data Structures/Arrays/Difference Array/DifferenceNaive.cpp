#include <iostream>
using namespace std;
int main()
{
    int arr[4]={5,5,5,5};
    int reward=10;
    int l=1,r=3;
    for(int i=l;i<=r;i++)
    {
        arr[i] += 10;
    }
    cout<<"After adding Reward Point: ";
    for(int i=0;i<4;i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}
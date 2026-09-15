#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr) / sizeof(arr[0]);
    int prefix[size];
    prefix[0] = arr[0];
    for(int i=1;i<size;i++)
    {
        prefix[i] = prefix[i-1] + arr[i];
    }
    int lower,higher;
    cout<<"Enter Index range for Prefix Sum (L-R): ";
    cin>>lower>>higher;
    cout<<"Between "<<lower<<" to "<<higher<<" the sum is: "<<prefix[higher] - prefix[lower-1];
    //bug-free math with no negative indexing prefix[higher + 1] - prefix[lower] ( ->here prefix[0]=0 )
    return 0;
}
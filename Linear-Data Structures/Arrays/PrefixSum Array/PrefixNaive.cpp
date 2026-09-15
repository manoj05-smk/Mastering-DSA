#include <iostream>
using namespace std;
int main()
{
    //Prefix Naive Approach
    int arr[4] = {1,2,3,4};
    int l=1;
    int sum=0;
    for(int i=l;i<4;i++)
    {
        sum += arr[i];
    }
    cout<<sum;
}
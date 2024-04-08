#include<iostream>
using namespace std;
int main()
{
    int a[10],i;
    cout<<"Enter 10 values---\n";
    for(i=0;i<10;i++)
    {
        cout<<"Enter value at position "<<i+1;
        cin>>a[i];
    }
    int low=0,high=9,mid,n,f=0;
    cout<<"Enter a value:";
    cin>>n;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==n)
        {
            f=1;
            break;
        }
        else if(n>a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(f==1)
    {
        cout<<"Element found\n";
    }
    else
    {
        cout<<"Element not found";
    }
    return 0;
}

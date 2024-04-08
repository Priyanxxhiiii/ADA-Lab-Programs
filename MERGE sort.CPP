//MERGE SORT
#include<iostream>
using namespace std;
int main()
{
    int a[]={10,30,40,60,80},b[]={20,50,70,90,100},c[10];
    int i=0,j=0,k=0;
    while(i<5&&j<5)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<5)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<5)
    {
        c[k]=b[j];
        j++;
        k++;
    }
    for(i=0;i<10;i++)
    {
        cout<<c[i]<<"\t";
    }
    return 0;
}

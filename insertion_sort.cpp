#include<iostream>
using namespace std;

int main()
{
    int i,j,p,n,a[30],temp;

    cout<<"Enter the number of elements:\n";
    cin>>n;

    cout<<"Enter the array elements:\n";
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    for(i=2;i<=n;i++)
    {
        temp=a[i];
        p=i-1;
        while(temp<a[p] && p>=1)
        {
            a[p+1] = a[p];
            p=p-1;
        }
        a[p+1] = temp;
    }

    cout<<"The sorted array is:\n";
    for(i=1;i<=n;i++)
    {
        cout<<a[i];
    }

    return 0;
}
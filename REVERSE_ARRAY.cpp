#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,j,n,temp;

    cout<<"HOW MANY ELEMENTS YOU WANNA INSERT"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"ENTER ELEMENT "<<i+1<<"\n";
        cin>>arr[i];
    }

    for(i=0,j=n-1;i<n/2;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    cout<<"\nReverse Array"<<endl;

    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}

#include<iostream>
using namespace std;

int main()
{

    int i,n;
    float arr[100];

    cout<<"Enter the total number of elements (1 to 100)"<<endl;
    cin>>n;
    cout<<endl;

    for(i=0;i<n;i++)
    {

        cout<<"Enter number-> "<<i+1<<endl;;
        cin>>arr[i];

    }
    for(i=1;i<n;i++)
    {
        if(arr[0]<arr[i])
            arr[0]=arr[i];
    }
        cout<<"Largest element "<<arr[0];

        return 0;
}

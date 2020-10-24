#include<iostream>

using namespace std;

int main()
{
    int arr[20],i,n,sum=0;
    cout<<"Enter the number of the elements "<<endl;
    cin >>n;

    cout<<"Enter the "<<n<<" elements"<<endl;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Sum of elements are :"<<endl;

    for(i=0;i<n;i++)
    {
        sum = sum+arr[i];
    }

    cout<<sum;

    return 0;
}

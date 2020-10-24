#include<iostream>

using namespace std;

int main()
{
    int n,flag =0;
    cout<<"Enter the number to find out whether it is prime or not: "<<endl;
    cin>>n;

    for(int i=2;i<=n/2;i++)
    {
        if(n%i == 0)
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
        cout<<n<<" is a prime number "<<endl;
    else
        cout<<n<<" is not a prime number "<<endl;
    return 0;

}

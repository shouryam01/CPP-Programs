#include<iostream>

using namespace std;

void fib(int num)
{
    int x=0,y=1,z=0;

    for(int i=0;i<num;i++)
    {
        cout<<x<<" "<<endl;
        z=x+y;
        x=y;
        y=z;

    }
}

int main()
{
    int num;
    cout<<"Enter the number "<<endl;
    cin>>num;
    cout<<"\nFibonacci Series :"<<endl;
    fib(num);
    return 0;

}

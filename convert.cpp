#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    char ch;
    cout<<"Enter any alphabet"<<endl;
    cin>>ch;

    if(ch >='a' && ch<='z')
    {
        cout<<"You entered a lowercase alphabet"<<endl;
        ch=ch-32;

        cout<<"\nThe uppercase alphabet is "<<ch<<endl;
    }

    else
    {
        cout<<"You entered an uppercase alphabet\n";
        ch=ch+32;

        cout<<"\nThe lowercase Alphabet is "<<ch;
    }
    cout<<endl;

    return 0;
}

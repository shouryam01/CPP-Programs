#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[30];

    cout<<"Enter the string"<<endl;

    cin>>s;

    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            s[i]=s[i]-32;
        }
    }
    cout<<"The entered string in uppercase is "<<s<<endl;
    return 0;
}

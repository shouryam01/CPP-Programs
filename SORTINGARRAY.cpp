#include<iostream>
using namespace std;
int main()
{
    int i,j,temp,pass=0;
    int a[10]={1,2,88,77,66,32,22,76,0,65};
    cout<<"The list of the arrays"<<endl;
    for(i=0;i<10;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;

    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        pass++;
    }

    cout<<"SORTED ELEMENT LISTS"<<endl;
    for(i=0;i<10;i++)
    cout<<a[i]<<"\t";

return 0;
}

#include<iostream>

using namespace std;

int main()
{
    int arr[100], Count, n, i, nCount=0, pCount=0, zCount=0;

    cout<<"Enter the number of elements in Array "<<endl;
    cin>>Count;

    cout<<"Enter "<<Count<<" Numbers \n"<<endl;

    //Read elements

    for(i=0;i<Count;i++)
    {
        cin>>arr[i];
    }

    //Iterate from 0 to element count-1

   for(i=0;i<Count;i++)
   {
       if(arr[i]<0)
       {
           nCount++;
       }

       else if(arr[i]>0)
       {
           pCount++;
       }

       else
       {
           zCount++;
       }
   }

   cout<<"Negative Number "<<nCount<<endl;

   cout<<"Positive Number "<<pCount<<endl;

   cout<<"Zero Number "<<zCount<<endl;

   return 0;

}

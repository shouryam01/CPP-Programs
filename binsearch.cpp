// -----BINARY SEARCH IN ARRAY------


#include<iostream>
using namespace std;

int main()
{
    int count, i, arr[30], num, first, last, middle;
    cout<<"How many elements you want to enter:"<<endl;
    cin>>count;

    for(i=0;i<count;i++)
    {
        cout<<"Enter number - "<<i+1<<endl;
        cin>>arr[i];
    }

    cout<<"Enter the number that you want to search :"<<endl;
    cin>>num;
    first=0;
    last = count-1;
    middle = (first+last)/2;

    while(first <= last)
    {
        if(arr[middle] < num)
        {
            first = middle + 1;
        }

        else if(arr[middle] == num)
                {
                        cout<<num<<"found in the array at the location "<<middle + 1;
                            break;
                }
        else {
            last = middle - 1;
        }
        middle = (first + last)/2;
    }
        if(first > last)
        {
            cout<<num<<"not found in this array";
        }
    return 0;
}

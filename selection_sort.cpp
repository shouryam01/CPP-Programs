#include<iostream>

using namespace std;

void selectsort(int a[],int n)
{
    for(int i=0;i<n-1;i++) // we need to do n-2 passes
    {
        int iMin = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[iMin])
                iMin = j;
        }
        int temp = a[i];
        a[i] = a[iMin];
        a[iMin]= temp;
    }
}

int main()
{
    int a[] = {2,10,19,7,30,1,5,3};
    selectsort(a,8);

    for(int i = 0;i<7;i++)
        cout<<a[i]<<" ";

}

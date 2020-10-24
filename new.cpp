#include<iostream>
using namespace std;

int main()
{
    int a[10][10], transpose[10][10], rows, columns, i, j;

    cout<<"Enter the rows and columns of matrix "<<endl;

    cin>>rows>>columns;

    cout<<"Enter element of matrix:"<<endl;

    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
    {
        cout<<"Enter element a"<<i+1<<j+1<<":"<<endl;

        cin>>a[i][j];
    }
}

cout<<"\nEntered Matrix"<<endl;
for(i=0;i<rows;i++)
{
    for(j=0;j<columns;j++)
    {
        cout<<" "<<a[i][j];
        if(j==columns-1)
            cout<<endl<<endl;
    }
}

for(i=0;i<rows;i++)

    for(j=0;j<columns;j++)
    {
            transpose[j][i]=a[i][j];
    }

    cout<<"Transpose of Matrix"<<endl;
    for(int i=0;i<columns;i++)
        for(int j=0;j<rows;j++)
    {
        cout<<" "<<transpose[i][j];
        if(j==rows-1)
            cout<<endl<<endl;
    }

    return 0;
}

